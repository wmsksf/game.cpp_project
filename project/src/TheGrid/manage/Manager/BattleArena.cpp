
#include "BattleArena.h"
#include "../../TheGrid.h"
#include "../Command/AttackCommand.h"
#include "../Command/CastSpellCommand.h"
#include "../Command/UsePotionCommand.h"
#include "../Command/EquipWeaponCommand.h"
#include "../Command/EquipArmorCommand.h"
#include "../Command/DisplayArenaCommand.h"
#include "../Command/HelpinArenaCommand.h"


BattleArena::BattleArena(TheGrid* theGrid)
	:theGrid(theGrid),
	 party(theGrid->getParty())
{
	MonsterFactory* monsterFactory = new MonsterFactory(theGrid->getNameFactory());

	monsters = monsterFactory->createMonsters(theGrid->getParty());

	initCommandManager();

    heroContribution = new int[party->getPartySize()];

    for(int i = 0; i < party->getPartySize(); i++)
    {
        heroContribution[i] = 0;
    }
}

void BattleArena::displayBattleInfo()
{
	std::cout << "HEROES:" << std::endl;

	for(int i =0; i < party->getPartySize(); i++)
	{
		party->getHero(i)->displayStats();
	}

	std::cout << "MONSTERS:" << std::endl;

	for(int i = 0; i < monsters->size(); i++)
	{
		(*monsters)[i]->displayStats();
	}
}

void BattleArena::heroRound(Hero* hero)
{
	while(true)
	{
		std::cout << "Mighty hero " << hero->getName() << ", what is your command ?";
		std::cout << std::endl;

		std::cout << "You may either attack, castSpell, usePotion..." << std::endl;
		std::cout << "Or equipArmor, equipWeapon..." << std::endl;

		std::string line;
		std::getline(std::cin, line);

		std::string name = hero->getName();

		if(BattleManager->execute(theGrid, line + " " + name))
        {
            return ;
        }
	}
}

void BattleArena::monsterRound(Monster* monster)
{
    int heroNum = randomInt(party->getPartySize());

    Hero* hero = party->getHero(heroNum);

    while(!hero->isConscious())
    {
        heroNum = (heroNum + 1) % party->getPartySize();

        hero = party->getHero(heroNum);
    }

    MonsterStats* stats = calculateStats(monster);

    double dodgeProbability = (double)hero->getAgility() / 500;
    double dodgeChance = randomDouble();

    if(dodgeChance < dodgeProbability)
    {
        std::cout << "Monster " << monster->getName() << " tried to attack but player "
                  << hero->getName() << " dodged the attack" << std::endl;
        return;
    }

    int damage = randomInRange(monster->getMinDamage(), monster->getMaxDamage());

    Armor* armor = hero->getEquipedArmor();
    if(armor != nullptr)
    {
        damage = damage * (1.0 - ((double)armor->getArmorPoints() / 300.0));
    }

    hero->setCurrentHealthPower(hero->getCurrentHealthPower() - damage);

    std::cout << "Monster " << monster->getName() << " inflicted "<< damage
              << " to hero " << hero->getName() << std::endl;
    if(!hero->isConscious())
    {
        std::cout << "Hero " << hero->getName() << " has fainted!" << std::endl;
    }

    contribute(hero, damage);
 }

bool BattleArena::isFinished()
{
	int heroCount = 0;

	for(int i = 0; i < party->getPartySize(); i++)
	{
		if(party->getHero(i)->isConscious())
			heroCount++;
	}

	if(heroCount == 0)
		return true;

	if(monsters->size() == 0)
		return true;
}

void BattleArena::start()
{
    std::cout << "Mighty heroes you have entered a battle" << std::endl;

    showMonsters();

	while(!isFinished())
	{
        countDownMonsterEffects();

        for(int i = 0; i < party->getPartySize(); i++)
		{
			Hero* hero = party->getHero(i);

			if(hero->isConscious())
			{
				heroRound(hero);
			}
		}

		for(int i = 0; i < monsters->size(); i++)
		{
			monsterRound((*monsters)[i]);
		}

        regenerate();
	}

	if (victors())
		reward();
	else
		defeat();
}

bool BattleArena::victors()
{
	return monsters->empty();
}

void BattleArena::defeat()
{
    for(int i = 0; i < party->getPartySize(); i++)
    {
        Hero* hero = party->getHero(i);

        hero->setMoney(hero->getMoney() / 2);
    }
}

void BattleArena::reward()
{
    for(int i = 0; i < party->getPartySize(); i++)
    {
        Hero* hero = party->getHero(i);

        double contr = (double)heroContribution[i] / (double)totalContribution;

        int heroMoneyReward = moneyReward * contr;
        int heroExperienceReward = experienceReward * contr;

        std::cout << "Hero " << hero->getName() << " rewarded " << heroMoneyReward << " coins and"
                   << heroExperienceReward << " experience points" << std::endl;

        hero->setMoney(hero->getMoney() + heroMoneyReward);
        hero->gainExperience(heroExperienceReward);
    }
}

void BattleArena::showMonsters()
{
	for(int i = 0; i < monsters->size(); i++)
	{
		std::cout << "[" << i + 1 << "] ";

		(*monsters)[i]->displayStats();

		std::cout << std::endl;
	}
}

Monster* BattleArena::monsterDialog()
{
	std::cout << "Which monster to attack <monster_id>?" << std::endl;

	showMonsters();

	int monster_index;
	std::cin >> monster_index;

	while(monster_index < 0 || monster_index > monsters->size())
	{
		std::cout << "Unknown monster.." << std::endl;
		std::cout << "You may have given the index wrong..." << std::endl;
		std::cout << "Give an index of one of the monsters below." << std::endl;

		showMonsters();

		std::cin >> monster_index;
	}

	return (*monsters)[monster_index - 1];
}

void BattleArena::initCommandManager()
{
	std::vector<Command*>* commands = new std::vector<Command*>();

	commands->push_back(new AttackCommand(this));
	commands->push_back(new CastSpellCommand(this));
	commands->push_back(new UsePotionCommand(this));
	commands->push_back(new EquipArmorCommand());
	commands->push_back(new EquipWeaponCommand());
	commands->push_back(new DisplayArenaCommand(this));
    commands->push_back(new HelpinArenaCommand(this));

	BattleManager = new CommandManager(commands);
}

CommandManager* BattleArena::getBattleManager() const
{
    return BattleManager;
}

void BattleArena::spellCast(Hero* hero, Spell* spell, Monster* monster)
{
    if(hero->getCurrentMagicPower() < spell->getRequiredMagicPower())
    {
        std::cout << "Not enough magic power!!" << std::endl;
        return ;
    }

    MonsterStats* stats = calculateStats(monster);

    int damage = randomInRange(spell->getMinDamage(), spell->getMaxDamage())
                 * (1.0 + (hero->getDexterity() / 122.0));

    damage = damage * ( 1.0 - (stats->getDefense() / 1000.0));

    monster->setCurrentHealthPower(monster->getCurrentHealthPower() - damage);

    monster->applyEffect(spell->getEffect());

    std::cout << "Inflicted " << damage << " damage to monster "
              << monster->getName() << std::endl;

    if(monster->getCurrentHealthPower() <= 0)
    {
        std::cout << "Monster " << monster->getName() << " has been killed " << std::endl;
        killMonster(monster);
    }

    contribute(hero, damage);
    hero->setCurrentMagicPower(hero->getCurrentMagicPower() - spell->getRequiredMagicPower());
}

void BattleArena::attack(Hero* hero, Monster* monster)
{
    Weapon* weapon = hero->getEquipedWeapon();

    int damage = hero->getStrength();

    if(weapon != nullptr)
    {
        damage += weapon->getDamage();
    }

    MonsterStats* stats = calculateStats(monster);

    double dodgeChange = randomDouble();
    if(dodgeChange < stats->getDodgeProbability())
    {
        std:: cout << "Monster dodged the attack" << std::endl;
        return ;
    }

    damage = damage * (1.0 - (stats->getDefense() / 1000.0));

    monster->setCurrentHealthPower(monster->getCurrentHealthPower() - damage);

    std::cout << "Inflicted " << damage << " damage to monster "
              << monster->getName() << " [ " << monster->getCurrentHealthPower()
              << " / " << monster->getMaxHealthPower() << " ]" << std::endl;

    if(monster->getCurrentHealthPower() <= 0)
    {
        std::cout << "Monster " << monster->getName() << " has been killed " << std::endl;
        killMonster(monster);
    }

    contribute(hero, damage);
}

void BattleArena::usePotion(Hero* hero, Potion* potion)
{
	hero->use(potion);

	hero->removeItem(potion);
}

MonsterStats* BattleArena::calculateStats(Monster* monster)
{
	MonsterStats* stats = new MonsterStats(monster);

	std::vector<Effect*> effects = monster->getEffects();

	for(int i = 0; i < effects.size(); i++)
	{
        if(effects[i]->expired())
            continue;

		effects[i]->apply(stats);
	}

	return stats;
}

HeroParty* BattleArena::getParty() const
{
    return party;
}

std::vector<Monster *>* BattleArena::getMonsters() const
{
    return monsters;
}

void BattleArena::killMonster(Monster *monster)
{
    for(int i = 0; i < monsters->size(); i++)
    {
        if((*monsters)[i] == monster)
        {

            moneyReward += monster->getMoneyReward();
            experienceReward += monster->getExperienceWorth();

            monsters->erase(monsters->begin() + i);
            delete monster;

            return ;
        }
    }
}

void BattleArena::countDownMonsterEffects()
{
    for(int i = 0; i < monsters->size(); i++)
    {
        Monster* monster = (*monsters)[i];

        monster->countDownEffects();
    }
}

void BattleArena::regenerate()
{
    for(int i = 0; i < party->getPartySize(); i++)
    {
        Hero* hero = party->getHero(i);

        if(hero->isConscious())
        {
            hero->restoreHealth(hero->getHealthRegen());
            hero->restoreMagicPower(hero->getMagicRegen());
        }
    }

    for(int i = 0; i < monsters->size(); i++)
    {
        Monster* monster = (*monsters)[i];
        monster->restoreHealth(monster->getHealthRegen());
    }
}

void BattleArena::contribute(Hero *hero, int damage)
{
    damage = damage > 0  ? damage : damage * -1;

    totalContribution += damage;

    for(int i = 0; i < party->getPartySize(); i++)
    {
        Hero* pHero = party->getHero(i);

        if(pHero == hero)
        {
            heroContribution[i] += damage;

            return;
        }
    }
}

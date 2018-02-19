
#include "BattleArena.h"
#include "../../TheGrid.h"
#include "../Command/AttackCommand.h"
#include "../Command/CastSpellCommand.h"
#include "../Command/UsePotionCommand.h"


BattleArena::BattleArena(TheGrid *theGrid)
	:theGrid(theGrid)
{
	MonsterFactory* monsterFactory = new MonsterFactory();

	monsters = monsterFactory->createMonsters(theGrid->getParty());

	initCommandManager();
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
		std::cout << "Or equip an armor, getWeapon..." << std::endl;


		std::string line;
		std::getline(std::cin, line);

		std::string name = hero->getName();

		if(BattleManager->execute(theGrid, line + name))
			return ;
	}
}

void BattleArena::monsterRound(Monster* monster)
{

}

bool BattleArena::isFinished()
{
	int heroCount = 0;

	for(int i = 0; i < party->getPartySize(); i++)
	{
		if(!party->getHero(i)->isConscious())
			heroCount++;
	}

	if(heroCount == 0)
		return true;

	if(monsters->size() == 0)
		return true;
}

void BattleArena::start()
{
	while(!isFinished())
	{
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
	}

	if (victors())
		reward();
	else
		defeat();
}

bool BattleArena::victors()
{
	return monsters->size() == 0;
}

void BattleArena::defeat()
{

}

void BattleArena::reward()
{

}

void BattleArena::showMonsters()
{

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

	return (*monsters)[monster_index];
}

void BattleArena::initCommandManager()
{
	std::vector<Command*>* commands = new std::vector<Command*>();

	commands->push_back(new AttackCommand(this));
	commands->push_back(new CastSpellCommand(this));
	commands->push_back(new UsePotionCommand(this));
	commands->push_back(new EquipArmorCommand(this));
	commands->push_back(new GetWeaponCommand(this));

	BattleManager = new CommandManager(commands);
}


void BattleArena::spellCast(Hero *hero, Spell *spell, Monster *monster)
{
	/// TODO calculate damage

	MonsterStats* stats = calculateStats(monster);


	//add effect
	monster.addEffect(spell.getEffect());


}

MonsterStats *BattleArena::calculateStats(Monster *monster)
{
	MonsterStats* stats = new MonsterStats(monster);

	std::vector<Effect*> effects = monster.getEffects();

	for(int i = 0; i < )
	{
		Effect* effect;

		effect->apply(stats);
	}

	//apply all monster effects
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
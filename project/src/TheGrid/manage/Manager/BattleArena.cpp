
#include "BattleArena.h"
#include "../../TheGrid.h"


BattleArena::BattleArena(TheGrid *theGrid)
	:theGrid(theGrid)
{
	monsters = theGrid->getMonsterFactory()->createMonsters(theGrid->getParty());
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
		std::cout << "Mighty hero " << hero->getName() << ", what is your command ?" << std::endl;
		std::cout << "You may attack, castSpell or usePotion..." << std::endl;

		std::string line;
		std::getline(std::cin, line);

		if(commandManager->execute(theGrid, line))
			return ;

//		if(line.compare("attack") == 0)
//		{
//			Monster* monster = monsterDialog();
//
//
//			if(monster == nullptr)
//				continue;
//
//			attack(hero, monster);
//			return ;
//		}
//		else if ( line.compare("castSpell") == 0)
//		{
//			Monster* monster = monsterDialog();
//
//			if(monster == nullptr)
//				continue;
//
//			Spell* spell = spellDialog(hero);
//
//			if(spell == nullptr)
//				continue;
//
//			spellCast(hero, spell, monster);
//			return ;
//		}
//		else if(line.compare("usePotion") == 0)
//		{
//			Potion* potion = potionDialog(hero);
//
//			if(potion == nullptr)
//				continue;
//
//			usePotion(hero, potion);
//			return ;
//		}
//		else
//		{
//			std::cout << "Unknown command" << std::endl;
//			continue;
//		}

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
	{
		reward();
	} else
	{
		defeat();
	}
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
	if(monster_index < 0 || monster_index > monsters->size())
	{
		std::cout << "Unknown monster" << std::endl;
		return nullptr;
	}

	return (*monsters)[monster_index];

}

Spell *BattleArena::spellDialog(Hero *hero)
{
	std::cout << "Which spell to cast <spell_name>?" << std::endl;

	hero->printSpellsofInventory();

	std::string name;
	std::cin >> name;

	Spell* spell = hero->getSpell(name);
	if(spell == nullptr)
		std::cout << "Unknown spell" << std::endl;

	return spell;
}

Potion *BattleArena::potionDialog(Hero *hero)
{
	std::cout << "Which potion to use <potion_name>?" << std::endl;

	hero->printItemsofInventory("Potion");

	std::string name;
	std::cin >> name;

	Item* item = hero->getItem(name);

	if(item == nullptr)
	{
		std::cout << "Unknown potion" << std::endl;
		return nullptr;
	}

	if(item->getDescription().compare("Potion") != 0)
	{
		std::cout << "Please select a potion" << std::endl;
		return nullptr;
	}


	return (Potion*) item;
}

void BattleArena::initCommandManager()
{
	//TODO init command manager.
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

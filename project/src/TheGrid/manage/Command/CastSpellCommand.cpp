
#include "CastSpellCommand.h"

CastSpellCommand::CastSpellCommand(BattleArena *battleArena)
                :Command("castSpell", "[castSpell] Command to cast a spell"),
                 battleArena(battleArena) {}

bool CastSpellCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    Hero* hero = battleArena->getParty()->getHero(args[0]);

    Monster* monster = battleArena->monsterDialog();

    Spell* spell = getSpell(hero);

    battleArena->spellCast(hero, spell, monster);

    return true;
}

Spell* CastSpellCommand::getSpell(Hero* hero)
{
    if(hero->getInventory().noSpells())
    {
        std::cout << "Your inventory is empty... Cannot cast any spell." << std::endl;
        return false;
    }

    std::cout << "Which spell to cast <spell_name>?" << std::endl;

    hero->printSpellsofInventory();

    std::string name;
    std::cin >> name;

    Spell* spell = hero->getSpell(name);

    while(spell == nullptr)
    {
        std::cout << "Unknown spell..." << std::endl;
        std::cout << "You may have given the name wrong..." << std::endl;
        std::cout << "Please check your inventory once again." << std::endl;

        hero->printSpellsofInventory();

        std::cin >> name;
        spell = hero->getSpell(name);
    }

    return spell;
}
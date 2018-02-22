
#include "CastSpellCommand.h"

CastSpellCommand::CastSpellCommand(BattleArena *battleArena)
                :Command("castSpell", "[castSpell] Command to cast a spell"),
                 battleArena(battleArena) {}

bool CastSpellCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    Hero* hero = battleArena->getParty()->getHero(args[0]);

    Spell* spell =  getSpell(hero);

    Monster* monster = battleArena->monsterDialog();

    if(spell == nullptr)
        return false;

    if(hero->getLevel() < spell->getRequiredLvl())
    {
        std::cout << std::endl << "Level too low!" << std::endl;
        return false;
    }

    battleArena->spellCast(hero, spell, monster);

    return true;
}

Spell* CastSpellCommand::getSpell(Hero* hero)
{
    if(hero->getInventory().noSpells())
    {
        std::cout << std::endl << "Your inventory is empty... Cannot cast any spell."
                  << std::endl;
        return nullptr;
    }

    std::cout << std::endl << "Which spell to cast <spell_name>?" << std::endl;

    hero->printSpells();

    std::string name;
    std::cin >> name;

    Spell* spell = hero->getSpell(name);

    while(spell == nullptr)
    {
        std::cout << std::endl << "Unknown spell..." << std::endl;
        std::cout << "You may have given the name wrong..." << std::endl;
        std::cout << "Please check your inventory once again." << std::endl;

        hero->printSpells();

        std::cin >> name;
        spell = hero->getSpell(name);
    }

    return spell;
}
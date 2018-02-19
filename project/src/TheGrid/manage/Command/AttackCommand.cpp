
#include "AttackCommand.h"

AttackCommand::AttackCommand(BattleArena *battleArena)
            :Command("attack", "[attack] Command to attack a monster"),
             battleArena(battleArena) {}

bool AttackCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    Hero* hero = battleArena->getParty()->getHero(args[0]);

    Monster* monster = battleArena->monsterDialog();

    battleArena->attack(hero, monster);

    return true;
}
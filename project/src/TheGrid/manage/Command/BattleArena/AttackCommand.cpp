
#include "AttackCommand.h"
#include "../../Random/Utils.h"

AttackCommand::AttackCommand(BattleArena *battleArena)
            :Command("attack", "[attack (monster_id) ] Command to attack a monster"),
             battleArena(battleArena) {}

bool AttackCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    Hero* hero ;
    Monster* monster;


    if(args.size() == 1)
    {
        hero = battleArena->getParty()->getHero(args[0]);
        monster = battleArena->monsterDialog();
    }else if (args.size() == 2)
    {
        hero = battleArena->getParty()->getHero(args[1]);
        std::string index = args[0];
        if(!is_number(index))
            return invalidUsage();

        monster = battleArena->getMonster(stoi(index));
    } else
    {
        return invalidUsage();
    }

    if(hero == nullptr || monster == nullptr)
        return false;

    battleArena->attack(hero, monster);

    return true;
}

#ifndef NONO_GETWEAPONCOMMAND_H
#define NONO_GETWEAPONCOMMAND_H

#include "Command.h"
#include "../../entity/Living/Hero/Hero.h"

class GetWeaponCommand : public Command
{
private:
    Weapon* getWeapon(Hero* hero);

public:
    GetWeaponCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_GETWEAPONCOMMAND_H
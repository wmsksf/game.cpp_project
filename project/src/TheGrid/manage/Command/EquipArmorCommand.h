
#ifndef NONO_EQUIPARMORCOMMAND_H
#define NONO_EQUIPARMORCOMMAND_H

#include "Command.h"
#include "../../entity/Living/Hero/Hero.h"

class EquipArmorCommand : public Command
{
private:
    Armor* getArmor(Hero* hero);

public:
    EquipArmorCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_EQUIPARMORCOMMAND_H
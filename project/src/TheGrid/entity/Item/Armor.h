
#ifndef NONO_ARMOR_H
#define NONO_ARMOR_H

#include "Item.h"

class Armor : public Item
{
private:
    int armorPoints;

public:
    Armor(const std::string &name);

    int getArmorPoints() const;

    const std::string& getDescription();
};

#endif //ROLE_PLAY_GAME_ARMOR_H
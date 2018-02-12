
#ifndef NONO_WEAPON_H
#define NONO_WEAPON_H

#include "Item.h"

class Weapon : public Item
{
private:
	int damage;
    bool dualWeild;

public:
    Weapon(const std::string &name);

    bool isDualWeild() const;

	int getDamage() const;

	const std::string& getDescription();
};

#endif
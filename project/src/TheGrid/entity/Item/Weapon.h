
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
	void setDualWeild(bool dualWeild);

	int getDamage() const;
	void setDamage(int damage);

	Item* clone();
};

#endif
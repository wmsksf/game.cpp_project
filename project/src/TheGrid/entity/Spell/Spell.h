#ifndef NONO_SPELL_H
#define NONO_SPELL_H

#include <iostream>
#include <string>
#include "../Living/Hero/Hero.h"

class Spell
{
private:
	std::string name;
	int price;
	int requiredLvl;
	int requiredMagicPower;

	//range of damage
	int minDamage;
	int maxDamage;

public:
	Spell(const std::string &name,
	      int price,
	      int requiredLvl,
	      int requiredMagicPower,
	      int minDamage,
	      int maxDamage);
};

#endif //NONO_SPELL_H
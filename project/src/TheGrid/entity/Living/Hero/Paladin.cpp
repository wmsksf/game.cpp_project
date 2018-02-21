
#include "Paladin.h"
#include "../../../manage/Random/Random.h"

Paladin::Paladin(const std::string& name)
        :Hero(name)
{
	maxHealthPower = 1000;
	currentHealthPower = 1000;
	healthRegen = 12;

	maxMagicPower = 100;
	currentMagicPower = 100;
	magicRegen = 10;

	strength = 120;
	dexterity = 100;
	agility = 70;
}

void Paladin::levelUp()
{
	Hero::levelUp();

	maxHealthPower += 100;
	maxMagicPower += 10;

	strength += 12;
	dexterity += 10;
	agility += 7;
}

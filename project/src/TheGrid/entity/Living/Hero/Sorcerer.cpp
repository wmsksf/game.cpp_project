
#include "Sorcerer.h"
#include "../../../manage/Random/Random.h"

Sorcerer::Sorcerer(const std::string& name)
            :Hero(name)
{
	maxHealthPower = 800;
	currentHealthPower = 800;
	healthRegen = 8;

	maxMagicPower = 150;
	currentMagicPower = 150;
	magicRegen = 18;

	strength = 70;
	dexterity = 120;
	agility = 100;
}

void Sorcerer::levelUp()
{
	Hero::levelUp();

	maxHealthPower += 80;
	maxMagicPower += 15;

	strength += 7;
	dexterity += 12;
	agility += 10;
}

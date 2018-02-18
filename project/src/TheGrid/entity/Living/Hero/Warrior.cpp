
#include "Warrior.h"
#include "../../../manage/Random/Random.h"

Warrior::Warrior(const std::string &name)

		: Hero(name)
{
	maxHealthPower = 1200;
	currentHealthPower = 1200;

	maxMagicPower = 80;
	currentMagicPower = 80;

	strength = 100;
	dexterity = 80;
	agility = 150;

}

void Warrior::levelUp()
{
	Hero::levelUp();

	maxHealthPower += 120;
	maxMagicPower += 8;

	strength += 10;
	dexterity += 8;
	agility += 15;
}


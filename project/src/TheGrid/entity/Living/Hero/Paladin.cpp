#include "Paladin.h"

Paladin::Paladin(const std::string& name)

        :Hero(name,
              randomInRange(400, 600),
              randomInRange(300, 400),
              randomInRange(250, 150)) {}

void Paladin::levelUp()
{
	Hero::levelUp();

	strength += 12;
	dexterity += 10;
	agility += 7;
}

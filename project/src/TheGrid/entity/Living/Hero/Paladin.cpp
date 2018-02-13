
#include "Paladin.h"
#include "../../../manage/Random/Random.h"

Paladin::Paladin(const std::string& name)

        :Hero(name, "Paladin",
              randomInRange(400, 600),
              randomInRange(300, 400),
              randomInRange(250, 150)) {}

void Paladin::displayStats()
{
	std::cout << getCategory() << "..." << std::endl;

	Hero::displayStats();
}

void Paladin::levelUp()
{
	Hero::levelUp();

	strength += 12;
	dexterity += 10;
	agility += 7;
}

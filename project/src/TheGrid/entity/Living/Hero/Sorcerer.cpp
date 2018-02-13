
#include "Sorcerer.h"
#include "../../../manage/Random/Random.h"

Sorcerer::Sorcerer(const std::string& name)

            :Hero(name,"Sorcerer",
                  randomInRange(250, 150),
                  randomInRange(400, 600),
                  randomInRange(300, 400)) {}

void Sorcerer::displayStats()
{
	std::cout << getCategory() << "..." << std::endl;

	Hero::displayStats();
}

void Sorcerer::levelUp()
{
	Hero::levelUp();

	strength += 7;
	dexterity += 12;
	agility += 10;
}

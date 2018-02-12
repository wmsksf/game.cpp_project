#include "Warrior.h"

Warrior::Warrior(const std::string& name)

            :Hero(name,
                  randomInRange(300, 400),
                  randomInRange(150, 250),
                  randomInRange(400, 600)) {}

void Warrior::displayStats()
{
    std::cout << "WARRIOR..." << std::endl;

    Hero::displayStats();
}

void Warrior::levelUp()
{
    Hero::levelUp();

    strength += 10;
    dexterity += 8;
    agility += 15;
}


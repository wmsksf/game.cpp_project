#include "Warrior.h"

Warrior::Warrior(const std::string& name)

            :Hero(name, Random(300, 400),
                  Random(150, 250), Random(400, 600)) {}

void Warrior::displayStats()
{
    std::cout << "WARRIOR..." << std::endl;

    Hero::displayStats();
}
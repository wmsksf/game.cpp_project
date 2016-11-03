
#include "Exoskeleton.h"
#include "../../../manage/Random/Random.h"

Exoskeleton::Exoskeleton(const std::string &name)

            :Monster(name, "Exoskeleton",randomInRange(15, 35), randomInRange(40, 50),
                     randomInRange(80, 100), randomDouble()) {}

void Exoskeleton::displayStats()
{
    std::cout << "EXOSKELETON..." << std::endl;

    Monster::displayStats();
}
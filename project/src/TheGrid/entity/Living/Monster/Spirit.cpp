
#include "Spirit.h"
#include "../../../manage/Random/Random.h"

Spirit::Spirit(const std::string &name)

            :Monster(name, randomInRange(5, 20),
                     randomInRange(25, 30),
                     randomInRange(10, 20),
                     randomDouble()) {}

void Spirit::displayStats()
{
    std::cout << "SPIRIT..." << std::endl;

    Monster::displayStats();
}

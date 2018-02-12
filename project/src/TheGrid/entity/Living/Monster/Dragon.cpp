#include "Dragon.h"
#include "../../../manage/Random/Random.h"

Dragon::Dragon(const std::string &name)

            :Monster(name, randomInRange(50, 70),
                     randomInRange(80, 100), randomInRange(30, 40),
                     randomDouble()) {}
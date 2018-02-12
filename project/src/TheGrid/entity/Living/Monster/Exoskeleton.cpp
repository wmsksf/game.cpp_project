#include "Exoskeleton.h"

Exoskeleton::Exoskeleton(const std::string &name)

            :Monster(name, randomInRange(15, 35), randomInRange(40, 50),
                     randomInRange(80, 100), randomDouble()) {}
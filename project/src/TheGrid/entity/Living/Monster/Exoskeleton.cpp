#include "Exoskeleton.h"

Exoskeleton::Exoskeleton(const std::string &name)

            :Monster(name, Random(15, 35), Random(40, 50),
                     Random(80, 100), dodgeProbability(25, 35)) {}
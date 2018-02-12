#include "Dragon.h"

Dragon::Dragon(const std::string &name)

            :Monster(name, Random(50, 70),
                     Random(80, 100), Random(30, 40),
                     Random(10, 20)) {}
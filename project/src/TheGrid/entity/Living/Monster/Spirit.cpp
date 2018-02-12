#include "Spirit.h"

Spirit::Spirit(const std::string &name)

            :Monster(name, Random(5, 20),
                     Random(25, 30), Random(10, 20),
                     Random(50, 80)) {}
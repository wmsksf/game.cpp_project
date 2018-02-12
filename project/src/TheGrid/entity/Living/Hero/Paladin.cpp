#include "Paladin.h"

Paladin::Paladin(const std::string& name)

        :Hero(name, Random(400, 600),
              Random(300, 400), Random(250, 150)) {}
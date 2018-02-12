//
// Created by admntiasf on 16/1/2018.
//

#include "FireSpell.h"

FireSpell::FireSpell(const std::string &name)

        :Spell(name, Random(90, 180),
               Random(10, 18), Random(12, 22),
               Random(10, 18), Random(20, 32)) {}
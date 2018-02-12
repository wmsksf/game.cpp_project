//
// Created by admntiasf on 16/1/2018.
//

#include "LightingSpell.h"

LightingSpell::LightingSpell(const std::string &name)

                :Spell(name, Random(60, 120),
                       Random(6, 18), Random(12, 20),
                       Random(10, 20), Random(30, 40)) {}
//
// Created by admntiasf on 16/1/2018.
//

#include "FireSpell.h"

FireSpell::FireSpell(std::string nm,
                     int prc, int lvl,
                     int damage, int magic)

                    :Spell(nm, prc, lvl,
                           damage, magic) {}
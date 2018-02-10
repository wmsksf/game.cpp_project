//
// Created by admntiasf on 16/1/2018.
//

#include "LightingSpell.h"

LightingSpell::LightingSpell(const std::string &name,
                             int price, int requiredLvl,
                             int requiredMana, int minDamage,
                             int maxDamage)

                            :Spell(name, price, requiredLvl,
                                   requiredMana, minDamage,
                                   maxDamage) {}
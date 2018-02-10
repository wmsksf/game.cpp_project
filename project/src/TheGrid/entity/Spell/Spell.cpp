//
// Created by admntiasf on 16/1/2018.
//

#include "Spell.h"

Spell::Spell(const std::string &name,
             int price, int requiredLvl,
             int requiredMana, int minDamage,
             int maxDamage)

            :name(name), price(price),
             requiredLvl(requiredLvl),
             requiredMana(requiredMana),
             minDamage(minDamage),
             maxDamage(maxDamage)   {}
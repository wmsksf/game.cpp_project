//
// Created by admntiasf on 16/1/2018.
//

#include "Spell.h"

Spell::Spell(std::string nm,
             int prc, int lvl,
             int damage, int magic)

            :name(nm), price(prc),
            damageRange(damage),
            magicPower(magic) {}
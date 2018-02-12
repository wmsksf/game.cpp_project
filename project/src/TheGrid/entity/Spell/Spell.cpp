#include "Spell.h"

Spell::Spell(const std::string &name, int price,
             int requiredLvl, int requiredMagicPower,
             int minDamage, int maxDamage)

            :name(name), price(price), requiredLvl(requiredLvl),
            requiredMagicPower(requiredMagicPower), minDamage(minDamage),
            maxDamage(maxDamage) {}
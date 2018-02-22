
#include "LightingSpell.h"
#include "../../manage/Random/Random.h"
#include "Effect/LightingSpellEffect.h"

LightingSpell::LightingSpell(const std::string &name)

                :Spell(name, randomInRange(60, 120),
                       randomInRange(6, 18), randomInRange(12, 20),
                       randomInRange(10, 20), randomInRange(30, 40)) {}

Effect* LightingSpell::getEffect()
{
    return new LightingSpellEffect();
}

Spell* LightingSpell::clone()
{
    return new LightingSpell(*this);
}
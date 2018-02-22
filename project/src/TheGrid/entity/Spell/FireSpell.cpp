
#include "FireSpell.h"
#include "../../manage/Random/Random.h"
#include "Effect/FireSpellEffect.h"

FireSpell::FireSpell(const std::string &name)

        :Spell(name,
               randomInRange(90, 180),
               randomInRange(10, 18),
               randomInRange(12, 22),
               randomInRange(10, 18),
               randomInRange(20, 32)) {}

Effect* FireSpell::getEffect()
{
    return new FireSpellEffect();
}

Spell* FireSpell::clone()
{
    return new FireSpell(*this);
}

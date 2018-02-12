#include "FireSpellEffect.h"

FireSpellEffect::FireSpellEffect()

                :Effect(), damage(randomInRange(1,5)) {}

void FireSpellEffect::apply(MonsterStats* monsterStats)
{
    monsterStats->setDefense(monsterStats->getDefense()
                             - getDamage());
}
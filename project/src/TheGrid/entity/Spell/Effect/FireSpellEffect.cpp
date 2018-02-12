//
// Created by admntiasf on 12/2/2018.
//

#include "FireSpellEffect.h"

FireSpellEffect::FireSpellEffect()

                :Effect(), damage(RandomInRange(1,5)) {}

void FireSpellEffect::apply(MonsterStats* monsterStats)
{
    monsterStats->setDefense(monsterStats->getDefense()
                             - getDamage());
}
//
// Created by admntiasf on 12/2/2018.
//

#include "LightingSpellEffect.h"

LightningSpellEffect::LightningSpellEffect()

                    :Effect(), damage(RandomDouble()) {}

void LightningSpellEffect::apply(MonsterStats *monsterStats)
{
    monsterStats->setDodgeProbability(monsterStats->getDodgeProbability()
                                      - getDamage());
}

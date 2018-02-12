#include "LightingSpellEffect.h"

LightningSpellEffect::LightningSpellEffect()

                    :Effect(), damage(randomDouble()) {}

void LightningSpellEffect::apply(MonsterStats *monsterStats)
{
    monsterStats->setDodgeProbability(monsterStats->getDodgeProbability()
                                      - getDamage());
}
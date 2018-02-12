
#include "LightingSpellEffect.h"
#include "../../../manage/Random/Random.h"

LightningSpellEffect::LightningSpellEffect()

                    :Effect()
{
    damage = randomDouble();
}

void LightningSpellEffect::apply(MonsterStats *monsterStats)
{
    monsterStats->setDodgeProbability(monsterStats->getDodgeProbability()
                                      - getDamage());
}
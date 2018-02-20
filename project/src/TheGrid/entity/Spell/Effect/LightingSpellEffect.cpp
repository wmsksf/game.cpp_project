
#include "LightingSpellEffect.h"
#include "../../../manage/Random/Random.h"

LightingSpellEffect::LightingSpellEffect()

            :Effect()
{
    damage = randomDouble();
}

void LightingSpellEffect::apply(MonsterStats *monsterStats)
{
    monsterStats->setDodgeProbability(monsterStats->getDodgeProbability()
                                      - getDamage());
}

#include "IceSpellEffect.h"
#include "../../../manage/Random/Random.h"

IceSpellEffect::IceSpellEffect()

        :Effect()
{
    damage = ( randomInRange(1,5));
}


void IceSpellEffect::apply(MonsterStats* monsterStats)
{
    monsterStats->setMaxDamage(monsterStats->getMaxDamage()
                               - getDamage());

    monsterStats->setMinDamage(monsterStats->getMinDamage()
                               - getDamage());
}
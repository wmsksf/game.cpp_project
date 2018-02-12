#ifndef NONO_LIGHTNINGSPELLEFFECT_H
#define NONO_LIGHTNINGSPELLEFFECT_H

#include "Effect.h"

class LightningSpellEffect : public Effect
{
public:
    LightningSpellEffect();

    void apply(MonsterStats* monsterStats);
};

#endif //NONO_LIGHTNINGSPELLEFFECT_H
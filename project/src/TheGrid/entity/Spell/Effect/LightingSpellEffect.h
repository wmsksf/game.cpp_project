
#ifndef NONO_LIGHTNINGSPELLEFFECT_H
#define NONO_LIGHTNINGSPELLEFFECT_H

#include "Effect.h"

class LightingSpellEffect : public Effect
{
public:
    LightingSpellEffect();

    void apply(MonsterStats* monsterStats);
};

#endif //NONO_LIGHTNINGSPELLEFFECT_H
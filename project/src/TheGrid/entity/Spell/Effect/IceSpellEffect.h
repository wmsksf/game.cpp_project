#ifndef NONO_ICESPELLEFFECT_H
#define NONO_ICESPELLEFFECT_H

#include "Effect.h"

class IceSpellEffect : public Effect
{
public:
    IceSpellEffect();

    void apply(MonsterStats* monsterStats);
};

#endif //NONO_ICESPELLEFFECT_H

#ifndef NONO_FIRESPELLEFFECT_H
#define NONO_FIRESPELLEFFECT_H

#include "Effect.h"

class FireSpellEffect : public Effect
{
public:
    FireSpellEffect();

    void apply(MonsterStats* monsterStats);
};

#endif //NONO_FIRESPELLEFFECT_H
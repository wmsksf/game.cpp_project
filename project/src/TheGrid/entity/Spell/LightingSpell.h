//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_LIGHTINGSPELL_H
#define NONO_LIGHTINGSPELL_H


#include "Spell.h"
#include "../Living/Monster/Monster.h"

class LightingSpell : public Spell {
    public:
        LightingSpell(std::string nm,
                      int prc, int lvl,
                      int damage, int magic);

        void useSpell(Hero*); //override
        void reduceOddtoAvoidAttack(Monster*);
};


#endif //NONO_LIGHTINGSPELL_H

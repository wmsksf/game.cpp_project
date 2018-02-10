//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_ICESPELL_H
#define NONO_ICESPELL_H

#include "Spell.h"
#include "../Living/Monster/Monster.h"

class IceSpell {
    public:
        IceSpell(std::string nm,
                 int prc, int lvl,
                 int damage, int magic);

        void useSpell(Hero*); //override
        void reduceRangeofOpponent(Monster*);

        int outputDamage(Hero* hero, int sourceDamage);
};


#endif //NONO_ICESPELL_H

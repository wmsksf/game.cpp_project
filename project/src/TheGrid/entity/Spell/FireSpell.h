//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_FIRESPELL_H
#define NONO_FIRESPELL_H


#include "Spell.h"
#include "../Living/Monster/Monster.h"

class FireSpell : public Spell {
    public:
        FireSpell(const std::string &, int,
                  int, int, int, int);

        void useSpell(Hero*); //override
        void reduceDefenseofOpponent(Monster*);
};


#endif //NONO_FIRESPELL_H

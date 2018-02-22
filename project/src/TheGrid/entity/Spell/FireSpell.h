
#ifndef NONO_FIRESPELL_H
#define NONO_FIRESPELL_H

#include "Spell.h"

class FireSpell : public Spell
{
public:
    FireSpell(const std::string &name);

    Effect* getEffect();

    Spell* clone();
};

#endif //NONO_FIRESPELL_H
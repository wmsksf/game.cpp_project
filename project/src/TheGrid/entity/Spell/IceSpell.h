
#ifndef NONO_ICESPELL_H
#define NONO_ICESPELL_H

#include "Spell.h"

class IceSpell : public Spell
{
public:
    IceSpell(const std::string &name);

    Effect*getEffect();

    Spell* clone();
};

#endif //NONO_ICESPELL_H
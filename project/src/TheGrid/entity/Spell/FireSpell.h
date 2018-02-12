#ifndef NONO_FIRESPELL_H
#define NONO_FIRESPELL_H

#include "Spell.h"
#include "../Living/Monster/Monster.h"

class FireSpell : public Spell
{
public:
    FireSpell(const std::string &name);
};

#endif //NONO_FIRESPELL_H
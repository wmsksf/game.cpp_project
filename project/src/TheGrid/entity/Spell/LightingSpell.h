#ifndef NONO_LIGHTINGSPELL_H
#define NONO_LIGHTINGSPELL_H

#include "Spell.h"
#include "../Living/Monster/Monster.h"

class LightingSpell : public Spell
{
public:
    LightingSpell(const std::string &name);
};

#endif //NONO_LIGHTINGSPELL_H
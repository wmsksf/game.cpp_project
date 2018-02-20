
#ifndef NONO_LIGHTINGSPELL_H
#define NONO_LIGHTINGSPELL_H

#include "Spell.h"

class LightingSpell : public Spell
{
public:
    LightingSpell(const std::string &name);

    Spell *clone() override;

    Effect *getEffect();
};

#endif //NONO_LIGHTINGSPELL_H
#include "IceSpell.h"

IceSpell::IceSpell(const std::string &name)

            :Spell(name, Random(50, 100),
                   Random(5, 12), Random(10, 20),
                   Random(8, 15), Random(18, 25)) {}
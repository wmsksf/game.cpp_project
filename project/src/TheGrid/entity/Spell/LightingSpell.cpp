
#include "LightingSpell.h"
#include "../../manage/Random/Random.h"

LightingSpell::LightingSpell(const std::string &name)

                :Spell(name, randomInRange(60, 120),
                       randomInRange(6, 18), randomInRange(12, 20),
                       randomInRange(10, 20), randomInRange(30, 40)) {}
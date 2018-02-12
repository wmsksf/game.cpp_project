#include "StrengthPotion.h"

StrengthPotion::StrengthPotion(const std::string &name)

                :Potion(name, Random(80, 160)) {}

int StrengthPotion::boost() const
{
    return 9;
}
#include "DexterityPotion.h"

DexterityPotion::DexterityPotion(const std::string &name)

                :Potion(name, Random(60, 130)) {}

int DexterityPotion::boost() const
{
    return 8;
}
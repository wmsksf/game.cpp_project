#include "MagicPotion.h"

MagicPotion::MagicPotion(const std::string &name)

            :Potion(name, Random(70, 150)) {}

int MagicPotion::boost() const
{
    return 7;
}
#include "Potion.h"

Potion::Potion(const std::string &name,
               int price)

        :Item(name, price,
              randomInRange(5, 12)) {}

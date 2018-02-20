
#include "Potion.h"
#include "../../../manage/Random/Random.h"

Potion::Potion(const std::string &name,
               int price)

        :Item(name, "Potion", price,
              randomInRange(2, 12)) {}

Item* Potion::clone() {}
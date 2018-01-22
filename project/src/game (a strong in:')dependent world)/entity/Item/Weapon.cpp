//
// Created by admntiasf on 16/1/2018.
//

#include "Weapon.h"

Weapon::Weapon(std::string name,
               int price, int lvl,
               int damage,
               bool both_hands)

               :Item(name, price, lvl),
                damageAmount(damage),
                bothHands(both_hands) {}
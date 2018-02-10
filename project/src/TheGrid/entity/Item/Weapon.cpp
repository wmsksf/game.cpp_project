//
// Created by admntiasf on 16/1/2018.
//

#include "Weapon.h"

Weapon::Weapon(const std::string &name,
               int price, int requiredLvl,
               int damage,
               bool dualWeild)

               :Item(name, price, requiredLvl),
                damage(damage),
                dualWeild(dualWeild) {}
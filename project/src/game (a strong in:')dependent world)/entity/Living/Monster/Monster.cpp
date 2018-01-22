//
// Created by admntiasf on 16/1/2018.
//

#include "Monster.h"

Monster::Monster(std::string name, int lvl,
                 int power, int damage,
                 int defense, double odd)

                :Living(name, lvl, power),
                 damageRange(damage),
                 defenseAmount(defense),
                 oddtoAvoidOpponent(odd) {}
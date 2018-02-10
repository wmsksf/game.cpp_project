//
// Created by admntiasf on 18/1/2018.
//

#include "Dragon.h"

Dragon::Dragon(std::string name, int lvl,
               int power, int damage,
               int defense, double odd)

               :Monster(name, lvl, power,
                        damage, defense, odd) {}
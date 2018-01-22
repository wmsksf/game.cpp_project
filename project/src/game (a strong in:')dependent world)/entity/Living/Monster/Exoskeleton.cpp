//
// Created by admntiasf on 18/1/2018.
//

#include "Exoskeleton.h"

Exoskeleton::Exoskeleton(std::string name, int lvl,
                         int power, int damage,
                         int defense, double odd)

                        :Monster(name, lvl, power,
                                damage, defense, odd) {}
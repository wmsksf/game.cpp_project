//
// Created by admntiasf on 16/1/2018.
//

#include "Hero.h"

Hero::Hero(std::string name, int lvl,
           int power, int magic,
           int strng, int dextr,
           int agil, int mon, int exp)

          :Living(name, lvl, power), magicPower(magic),
           strength(strng), dexterity(dextr),
           agility(agil), money(mon), experience(exp) {}
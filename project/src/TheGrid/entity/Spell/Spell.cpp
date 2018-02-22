
#include "Spell.h"
#include "../../manage/Random/Utils.h"

Spell::Spell(const std::string &name, int price,
             int requiredLvl, int requiredMagicPower,
             int minDamage, int maxDamage)

            :name(name),
             category("Spell"),
             price(price),
             requiredLvl(requiredLvl),
             requiredMagicPower(requiredMagicPower),
             minDamage(minDamage),
             maxDamage(maxDamage) {}

const std::string& Spell::getName() const
{
    return name;
}

void Spell::setName(const std::string &name)
{
    Spell::name = name;
}

int Spell::getPrice() const
{
    return price;
}

void Spell::setPrice(int price)
{
    Spell::price = price;
}

int Spell::getRequiredLvl() const
{
    return requiredLvl;
}

void Spell::setRequiredLvl(int requiredLvl)
{
    Spell::requiredLvl = requiredLvl;
}

int Spell::getRequiredMagicPower() const
{
    return requiredMagicPower;
}

void Spell::setRequiredMagicPower(int requiredMagicPower)
{
    Spell::requiredMagicPower = requiredMagicPower;
}

int Spell::getMinDamage() const
{
    return minDamage;
}

void Spell::setMinDamage(int minDamage)
{
    Spell::minDamage = minDamage;
}

int Spell::getMaxDamage() const
{
    return maxDamage;
}

void Spell::setMaxDamage(int maxDamage)
{
    Spell::maxDamage = maxDamage;
}

std::string Spell::getDescription()
{
    return string_format("%s [%s] [%d level] [%d coins] [%d magic power] "
                                 "[[%d, %d] damage range] ",
                         name.c_str(), category.c_str(), requiredLvl, price,
                         requiredMagicPower, minDamage, maxDamage);
}
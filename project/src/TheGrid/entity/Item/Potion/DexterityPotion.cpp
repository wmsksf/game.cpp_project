
#include "DexterityPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

DexterityPotion::DexterityPotion(const std::string &name)

                :Potion(name, randomInRange(60, 130)),
				 dexterityPoints(randomInRange(1, 5)) {}

std::string DexterityPotion::getDescription()
{
	return string_format("%s [%d level] [%d coins] : Increases Dexterity by %d.",
						 getName().c_str(), getRequiredLevel(), getPrice(), dexterityPoints);
}

void DexterityPotion::boost(Hero* hero)
{
	hero->setDexterity(hero->getDexterity() + dexterityPoints);
}

Item* DexterityPotion::clone()
{
	return new DexterityPotion(*this);
}

int DexterityPotion::getDexterityPoints() const
{
	return dexterityPoints;
}

void DexterityPotion::setDexterityPoints(int dexterityPoints)
{
	DexterityPotion::dexterityPoints = dexterityPoints;
}
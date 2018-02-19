
#include "DexterityPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

DexterityPotion::DexterityPotion(const std::string &name)

                :Potion(name, randomInRange(60, 130)),
				 dexterityPoints(randomInRange(1, 5)) {}

const std::string& DexterityPotion::getDescription()
{
	return string_format("%s [%d level] : Increases Dexterity by %d.",
						 getName(), getRequiredLevel(), dexterityPoints);
}

void DexterityPotion::boost(Hero* hero)
{
	hero->setDexterity(hero->getDexterity() + dexterityPoints);
}

Item* DexterityPotion::clone()
{
	DexterityPotion* dexterityPotion = new DexterityPotion(this->getName());

	dexterityPotion->setPrice(this->getPrice());
	dexterityPotion->setRequiredLevel(this->getRequiredLevel());
	dexterityPotion->setCategory(this->getCategory());

	dexterityPotion->setDexterityPoints(this->getDexterityPoints());

	return (Item*)dexterityPotion;
}

int DexterityPotion::getDexterityPoints() const
{
	return dexterityPoints;
}

void DexterityPotion::setDexterityPoints(int dexterityPoints)
{
	DexterityPotion::dexterityPoints = dexterityPoints;
}
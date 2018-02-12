#include "DexterityPotion.h"
#include "../../../manage/Random/Utils.h"

DexterityPotion::DexterityPotion(const std::string &name)

                :Potion(name, randomInRange(60, 130)),
				 dexterityPoints(randomInRange(1, 5)) {}

const std::string &DexterityPotion::getDescription()
{
	return string_format("%s [%d level] : Increases Dexterity by %d.",
						 getName(), getRequiredLevel(), dexterityPoints);
}

void DexterityPotion::boost(Hero *hero) const
{
	hero->setDexterity(hero->getDexterity() + dexterityPoints);
}

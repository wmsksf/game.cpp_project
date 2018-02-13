
#include "Hero.h"
#include "../../../manage/Random/Random.h"
#include "../../Item/Potion/Potion.h"

Hero::Hero(const std::string &name, const std::string &category,
		   int strength, int dexterity, int agility)

		: Living(name, 1000),
		  category(category),
		  currentMagicPower(randomInRange(280, 460)),
		  strength(strength),
		  dexterity(dexterity),
		  agility(agility),
		  magicRegen(randomInRange(10, 20)),
		  healthRegen(randomInRange(25, 35)),
		  money(0),
		  experience(0),
		  experienceForLevel(100)
{
	level = 1;
}

void Hero::displayStats()
{
	Living::displayStats();

	std::cout << "[" << currentMagicPower << " magic power]" << std::endl;

	std::cout << "[" << strength << " strength]" << std::endl;
	std::cout << "[" << dexterity << " dexterity]" << std::endl;
	std::cout << "[" << agility << " agility]" << std::endl;

	std::cout << "[" << magicRegen << " magic regeneration]" << std::endl;
	std::cout << "[" << healthRegen << " health regeneration]" << std::endl;

	std::cout << "[" << money << " total money]" << std::endl;
	std::cout << "[" << experience << "/" << experienceForLevel << " experience]" << std::endl;


	std::cout << std::endl << "[LEVEL: " << level << "]" << std::endl;
}

int Hero::getStrength() const
{
	return strength;
}

void Hero::setStrength(int strength)
{
	Hero::strength = strength;
}

int Hero::getDexterity() const
{
	return dexterity;
}

void Hero::setDexterity(int dexterity)
{
	Hero::dexterity = dexterity;
}

int Hero::getAgility() const
{
	return agility;
}

void Hero::setAgility(int agility)
{
	Hero::agility = agility;
}

int Hero::getMagicRegen() const
{
	return magicRegen;
}

void Hero::setMagicRegen(int magicRegen)
{
	Hero::magicRegen = magicRegen;
}

int Hero::getHealthRegen() const
{
	return healthRegen;
}

void Hero::setHealthRegen(int healthRegen)
{
	Hero::healthRegen = healthRegen;
}

int Hero::getMoney() const
{
	return money;
}

void Hero::setMoney(int money)
{
	Hero::money = money;
}

int Hero::getExperience() const
{
	return experience;
}

void Hero::setExperience(int experience)
{
	Hero::experience = experience;
}

Weapon *Hero::getEquipedWeapon() const
{
	return equipedWeapon;
}

Armor *Hero::getEquipedArmor() const
{
	return equipedArmor;
}

void Hero::equipWeapon(Weapon *weapon)
{
	equipedWeapon = weapon;
}

void Hero::equipArmor(Armor *armor)
{
	equipedArmor = armor;
}

void Hero::use(Potion *potion)
{
	potion->boost(this);
}

void Hero::gainExperience(int experiencePoints)
{
	experience += experiencePoints;

	if (experiencePoints > experienceForLevel)
	{
		experience = experience % experienceForLevel;
		experienceForLevel *= 2;

		levelUp();
	}
}

void Hero::levelUp()
{
	level++;
}

int Hero::getMaxMagicPower() const
{
	return maxMagicPower;
}

void Hero::setMaxMagicPower(int maxMagicPower)
{
	Hero::maxMagicPower = maxMagicPower;
}

int Hero::getCurrentMagicPower() const
{
	return currentMagicPower;
}

void Hero::setCurrentMagicPower(int currentMagicPower)
{
	Hero::currentMagicPower = currentMagicPower;
}

void Hero::restoreMagicPower(int magicPoints)
{
	currentMagicPower += magicPoints;

	if (currentMagicPower > maxMagicPower)
	{
		currentMagicPower = maxMagicPower;
	}
}

void Hero::addItem(Item *item)
{
	inventory.addItem(item);
}

Item *Hero::getItem(const std::string &name)
{
	return inventory.getItem(name);
}

void Hero::removeItem(Item *item)
{
	inventory.remove(item);
}

void Hero::printInventory()
{
	inventory.display();
}

Inventory& Hero::getInventory()
{
	return inventory;
}

const std::string &Hero::getCategory() const
{
	return category;
}

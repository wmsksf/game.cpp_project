
#include "Inventory.h"
#include "../../Spell/Spell.h"

Inventory::Inventory() {}

Item* Inventory::getItem(const std::string &name)
{
	std::vector<Item *>::iterator it = items.begin();

	while (it != items.end())
	{
		Item *item = *it;

		if (item->getName().compare(name) == 0)
		{
			return item;
		}

		it++;
	}

	return nullptr;
}

Spell* Inventory::getSpell(const std::string &name)
{
	std::vector<Spell*>::iterator it = spells.begin();

	while (it != spells.end())
	{
		Spell *spell = *it;

		if (spell->getName().compare(name) == 0)
		{
			return spell;
		}

		it++;
	}

	return nullptr;
}

std::vector<Item*> Inventory::getItemsByCategory(const std::string &category)
{
	std::vector<Item*> ItemsofCategory;

	for(std::vector<Item*>::iterator it = items.begin(); it != items.end(); it++)
	{
		if((*it)->getName().compare(category)) ItemsofCategory.push_back(*it);
	}

	return ItemsofCategory;
}


std::vector<Spell*> Inventory::getSpells()
{
	return spells;
}

void Inventory::addItem(Item* item)
{
	if(containsItem(item))
	{
		std::cout << "You have already purchased this item!";
		std::cout << std::endl;

		return ;
	}

	items.push_back(item->clone());
}

void Inventory::addSpell(Spell* spell)
{
	if(containsSpell(spell))
	{
		std::cout << "You have already purchased this item!";
		std::cout << std::endl;

		return ;
	}

	spells.push_back(spell->clone());
}

bool Inventory::containsItem(Item* item)
{
	for(int i = 0; i < items.size(); i++)
	{
		if(items[i] == item)
			return true;
	}

	return false;
}

bool Inventory::containsSpell(Spell* spell)
{
	for(int i = 0; i < spells.size(); i++)
	{
		if(spells[i] == spell)
			return true;
	}

	return false;
}

void Inventory::removeItem(Item* item)
{
	for(int i = 0; i < items.size(); i++)
	{
		if(items[i] == item)
		{
			items.erase(items.begin() + i);

			return ;
		}
	}
}

void Inventory::removeSpell(Spell* spell)
{
	for(int i = 0; i < spells.size(); i++)
	{
		if(spells[i] == spell)
		{
			spells.erase(spells.begin() + i);

			return ;
		}
	}
}

void Inventory::display()
{
	std::cout << "Inventory [" << items.size() << " items]" << std::endl;

	for( int i = 0; i < items.size(); i++)
	{
		std::cout << "[" << i <<"] " << items[i]->getDescription() << std::endl;
		std::cout << "/t[" << items[i]->getPrice() << " price]" << std::endl;
	}

	std::cout << "Inventory [" << spells.size() << " spells]" << std::endl;

	for( int i = 0; i < spells.size(); i++)
	{
		std::cout << "[" << i <<"] " << spells[i]->getDescription() << std::endl;
		std::cout << "/t[" << spells[i]->getPrice() << " price]" << std::endl;
	}
}

bool Inventory::noSpells()
{
	if(spells.empty())
		return true;
	else
		return false;
}

bool Inventory::noPotions()
{
	if(getItemsByCategory("Potion").empty())
		return true;
	else
		return false;
}

bool Inventory::noArmors()
{
	if(getItemsByCategory("Armor").empty())
		return true;
	else
		return false;
}

bool Inventory::noWeapons()
{
	if(getItemsByCategory("Weapon").empty())
		return true;
	else
		return false;
}
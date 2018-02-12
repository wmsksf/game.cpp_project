//
// Created by admntiasf on 10/2/2018.
//

#include "Inventory.h"

Item *Inventory::getItem(const std::string &name)
{
	std::vector<Item*>::iterator it = items.begin();

	while(it != items.end())
	{
		Item* item = *it;

		if(item->getName().compare(name) == 0)
		{
			return item;
		}
		it++;
	}

	return nullptr;
}

void Inventory::addItem(Item *item)
{
	if(contains(item))
		return ;

	items.push_back(item);
}

bool Inventory::contains(Item *item)
{
	for(int i = 0; i < items.size(); i++)
	{
		if(items[i] == item)
			return true;
	}


	return false;
}

void Inventory::remove(Item *item)
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

void Inventory::display()
{
	std::cout << "Inventory [" << items.size() << " items]" << std::endl;

	for( int i = 0; i < items.size(); i++)
	{
		//TODO implement getDescription instead of print Item.
		std::cout << "[" << i <<"] " << items[i]->getDescription() << std::endl;
	}
}

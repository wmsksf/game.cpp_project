
#ifndef NONO_INVENTORY_H
#define NONO_INVENTORY_H

#include <vector>
#include "../../Item/Item.h"
#include "../../Spell/Spell.h"

class Inventory
{
private:
    std::vector<Item*> items;
	std::vector<Spell*> spells;

public:

	std::vector<Item*> getItemsByCategory(const std::string& category);

    Item* getItem(const std::string& name);
    void addItem(Item* item);

	Spell* getSpell(const std::string& name);
	void addSpell(Spell* spell);

    bool containsItem(Item* item);
	bool containsSpell(Spell* spell);

    void removeItem(Item* item);
	void removeSpell(Spell* spell);

    void display();
};

#endif //NONO_INVENTORY_H
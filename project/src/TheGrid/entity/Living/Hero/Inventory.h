#ifndef NONO_INVENTORY_H
#define NONO_INVENTORY_H

#include <vector>
#include "../../Item/Item.h"

class Inventory
{
private:
    std::vector<Item*> items;

public:
    Item* getItem(std::string name);
    void addItem(Item* item);

    bool contains(Item* item);

    void remove(Item* item);

    void display() const;
};

#endif //NONO_INVENTORY_H
//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_INVENTORY_H
#define NONO_INVENTORY_H


#include <vector>
#include "../../Item/Item.h"
#include "../../../Console.h"

class Inventory
{
private:
    std::vector<Item*> items;

public:
    Item* getItem(std::string name);
    void addItem(Item* item);

    bool contains(Item* item);

    void remove(Item* item);

    void display(Console* console);
};


#endif //NONO_INVENTORY_H

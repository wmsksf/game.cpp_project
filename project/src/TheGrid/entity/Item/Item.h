#ifndef NONO_ITEM_H
#define NONO_ITEM_H

#include <iostream>
#include <string>

class Item
{
private:
    std::string name;
    int price;
    int requiredLevel;

public:
    Item(const std::string &name,
         int price,
         int requiredLevel);

    const std::string& getName() const;

    virtual void printItem() const;

	int getPrice() const;

	int getRequiredLevel() const;

	virtual const std::string& getDescription();

	virtual Item* clone();
};

#endif //ROLE_PLAY_GAME_ITEM_H
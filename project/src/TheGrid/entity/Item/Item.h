
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

	//TODO set it on constructor
	std::string category;

public:
    Item(const std::string &name,
         int price,
         int requiredLevel);

    const std::string& getName() const;

	int getPrice() const;

	int getRequiredLevel() const;

	virtual const std::string& getDescription();
};

#endif //ROLE_PLAY_GAME_ITEM_H
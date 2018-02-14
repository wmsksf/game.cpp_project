
#ifndef NONO_ITEM_H
#define NONO_ITEM_H

#include <iostream>
#include <string>

class Item
{
private:
    std::string name;
    std::string category;

    int price;
    int requiredLevel;

public:
    Item(const std::string &name,
         const std::string &category,
         int price,
         int requiredLevel);

    const std::string& getName() const;

	int getPrice() const;
	void setPrice(int price);

	const std::string &getCategory() const;
	void setCategory(const std::string &category);

	int getRequiredLevel() const;
	void setRequiredLevel(int requiredLevel)

	virtual Item* clone() = 0;
	virtual const std::string& getDescription();
};

#endif //ROLE_PLAY_GAME_ITEM_H
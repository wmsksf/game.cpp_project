#ifndef NONO_HEROPARTY_H
#define NONO_HEROPARTY_H

#include "../../entity/Living/Hero/Hero.h"
#include "Inventory.h"

class HeroParty
{
private:
    std::vector<Hero*> heroes;
    int x;
    int y;

	Inventory inventory;

public:


	void addItem(Item* item);
	Item* getItem(const std::string& name);

	void removeItem(Item* item);

	void printInventory();

    const std::vector<Hero*>& getHeroes() const;

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);
};

#endif //NONO_HEROPARTY_H
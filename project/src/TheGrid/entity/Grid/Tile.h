
#ifndef NONO_TILE_H
#define NONO_TILE_H

#include <string>
#include <iostream>

class Market;

class Tile
{
protected:
    std::string name;

public:
	Tile(const std::string& name);

    virtual bool isAccessible() = 0;
	virtual void printTile() = 0;

    const std::string& getName() const;

	virtual void enter() = 0;

	virtual Market* getMarket();
};

#endif //NONO_TILE_H
//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_TILE_H
#define NONO_TILE_H

#include <string>
#include "../../Console.h"

class Tile
{
protected:
    std::string name;
public:
    Tile();

    virtual bool isAccessible() = 0;
    virtual void printTile(Console*) = 0;

    const std::string& getName() const;
};


#endif //NONO_TILE_H

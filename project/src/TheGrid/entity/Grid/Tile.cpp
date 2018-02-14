
#include "Tile.h"

const std::string &Tile::getName() const
{
    return name;
}

Tile::Tile(const std::string &name)
    :name(name) {}

Market* getMarket() {}
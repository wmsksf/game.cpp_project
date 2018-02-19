
#include "Tile.h"

Tile::Tile(const std::string &name)
        :name(name) {}

const std::string &Tile::getName() const
{
    return name;
}
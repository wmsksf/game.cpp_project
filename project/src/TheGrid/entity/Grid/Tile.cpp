//
// Created by admntiasf on 16/1/2018.
//

#include "Tile.h"

const std::string &Tile::getName() const
{
    return name;
}

Tile::Tile(const std::string &name)
    :name(name)
{

}

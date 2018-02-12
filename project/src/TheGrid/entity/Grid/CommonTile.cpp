
#include "CommonTile.h"
#include "../../manage/Random/Random.h"
#include "../../manage/Manager/BattleArena.h"

CommonTile::CommonTile()
            :Tile("CommonTile"){}

bool CommonTile::isAccessible()
{
    return true;
}

void CommonTile::printTile()
{
    std::cout << ' ';
}

void CommonTile::enter()
{
    double probability = randomDouble();

    if(probability < 0.7)
    {
        //constructor!!?
        BattleArena battle;

        battle.start();
    }
}
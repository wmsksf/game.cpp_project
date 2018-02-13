
#include "Market.h"

Market::Market(const std::vector<Item> &market)

        :Tile("Market"), market(market) {}

bool Market::isAccessible()
{
    return true;
}

void Market::printTile()
{
    std::cout << 'M';
}

Item* Market::getItem(int number)
{
    return &(market[number]);
}

void Market::enter()
{
    std::cout << "You entered into a market!" << std::endl;
/*
    std::cout << "Do you want to do access market? [y/n]" << std::endl;

    std::string answer;
    std::cin >> answer;

   while(answer.compare("y") != 0 || answer.compare("n") != 0)
    {
        std::cout << "give 'y' for yes and 'n' for no!" << std::endl;
        std::cin >> answer;

        if(answer.compare("y") == 0 || answer.compare("n") == 0 || quit)
            break;
    }

    //commands!!??
    //std::cout << "buy or sell?" << std::endl;
*/
   }

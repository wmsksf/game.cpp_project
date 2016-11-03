//
// Created by admntiasf on 3/11/2016.
//

#include "MarketManager.h"
#include "../Random/Utils.h"

MarketManager::MarketManager(Market *market)
    {}


void MarketManager::execute(const std::string &line)
{
    std::vector<std::string> args = split(line, " ");

    std::string name = args[0];
    args.erase(args.begin());


    for(int i = 0; i < manage.size(); i++)
    {
        if(manage[i]->matches(name))
        {
            manage[i]->execute(args);
            return ;
        }
    }

    std::cout << "Unable to find command with name " << name  << std::endl;
}

const std::vector<MarketManage*> &MarketManager::getManagement() const
{
    return manage;
}

#ifndef NONO_MARKETMANAGER_H
#define NONO_MARKETMANAGER_H

#include "../../entity/Grid/Market.h"
#include "../MarketManage/MarketManage.h"

class MarketManager
{
private:
    std::vector<MarketManage*> manage;

    HeroParty* heroParty;

public:
    MarketManager(Market* market);

    void execute(const std::string& line);

    const std::vector<MarketManage*> &getManagement() const;
};

#endif //NONO_MARKETMANAGER_H
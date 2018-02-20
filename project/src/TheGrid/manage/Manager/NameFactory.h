
#ifndef NONO_NAMEFACTORY_H
#define NONO_NAMEFACTORY_H

#include <string>
#include <vector>
#include <map>
#include "EntityName.h"

class NameFactory
{
private:
    std::vector<EntityName*> entityNames;

    std::map<const std::string, int> frequencyMap;


public:
    NameFactory();
    NameFactory(const std::string& filename);

    std::string createName(const std::string& type);

    void load(const std::string &filename);
};

#endif //NONO_NAMEFACTORY_H
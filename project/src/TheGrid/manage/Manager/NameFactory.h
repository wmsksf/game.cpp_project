
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

    std::map<const std::string&, int> frequencyMap;

    void read(const std::string& filename);
public:
    NameFactory(const std::string& filename);

    std::string createName(const std::string& type);
};

#endif //NONO_NAMEFACTORY_H
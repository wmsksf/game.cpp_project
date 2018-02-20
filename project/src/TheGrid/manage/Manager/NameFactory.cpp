
#include <fstream>
#include <iostream>
#include "NameFactory.h"
#include <cstdlib>
#include "../Random/Utils.h"
#include "../Random/Random.h"

NameFactory::NameFactory()
        : entityNames(), frequencyMap()
{

}

NameFactory::NameFactory(const std::string &filename)
    : entityNames(), frequencyMap()
{
    load(filename);
}

std::string NameFactory::createName(const std::string &type)
{
    int num = randomInt(frequencyMap[type]);

    int sum = 0;

    for(int i = 0; i < entityNames.size(); i++)
    {
        EntityName* name = entityNames[i];
        if(name->getType().compare(type) == 0)
        {
            sum += name->getFrequency();

            if(sum > num)
                return name->getName();
        }
    }

    return type;
}

void NameFactory::load(const std::string &filename)
{
    //open file
    std::ifstream infile(filename);

    //check for error
    if(!infile.is_open())
    {
        std::cout << "failed to open file" << std::endl;
        exit(1);
    }

    std::string line;
    while(std::getline(infile, line))
    {
        std::vector<std::string> columns = split(line, ",");

        EntityName* name;

        if(columns.size() >= 3)
        {
            name = new EntityName(columns[0], columns[1], stoi(columns[2]));
        }else
        {
            name = new EntityName(columns[0], columns[1], 1);
        }

        entityNames.push_back(name);

        std::map<const std::string, int>::iterator it = frequencyMap.find(name->getType());
        if(it == frequencyMap.end())
        {
            frequencyMap[name->getType()] = name->getFrequency();
        }else
        {
            frequencyMap[name->getType()] = name->getFrequency() + frequencyMap[name->getType()];
        }
    }

    //close file
    infile.close();
}


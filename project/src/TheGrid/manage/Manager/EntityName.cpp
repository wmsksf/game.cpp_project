
#include "EntityName.h"

EntityName::EntityName(const std::string &name, const std::string &type, int frequency)
        :name(name), type(type), frequency(frequency) {}

const std::string &EntityName::getName() const
{
    return name;
}

const std::string &EntityName::getType() const
{
    return type;
}

int EntityName::getFrequency() const
{
    return frequency;
}

#ifndef NONO_ENTITYNAME_H
#define NONO_ENTITYNAME_H

#include <string>

class EntityName
{
private:
    std::string name;
    std::string type;
    int frequency;

public:

    EntityName(const std::string &name, const std::string &type, int frequency);

    const std::string &getName() const;

    const std::string &getType() const;

    int getFrequency() const;
};

#endif //NONO_ENTITYNAME_H
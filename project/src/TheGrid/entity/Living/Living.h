#ifndef NONO_LIVING_H
#define NONO_LIVING_H

#include <iostream>
#include <string>

class Living
{
private:
    std::string name;
    int healthPower;

protected:
    int level;

public:
    Living(const std::string &name);

    bool isConscious();

    virtual void displayStats();
};

#endif //NONO_LIVING_H
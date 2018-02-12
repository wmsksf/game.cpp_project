#ifndef NONO_WARRIOR_H
#define NONO_WARRIOR_H

#include "Hero.h"

class Warrior : public Hero
{
public:
    Warrior(const std::string &name);

    void displayStats();

protected:
	virtual void levelUp();
};

#endif //NONO_WARRIOR_H
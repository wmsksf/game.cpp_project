
#ifndef NONO_PALADIN_H
#define NONO_PALADIN_H

#include "Hero.h"

class Paladin : public Hero
{
public:
    Paladin(const std::string &name);

	void displayStats();

protected:
	void levelUp();
};

#endif //NONO_PALADIN_H
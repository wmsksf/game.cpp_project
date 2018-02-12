#ifndef NONO_AGILITYPOTION_H
#define NONO_AGILITYPOTION_H

#include "Potion.h"

class AgilityPotion : Potion
{
private:
	int agilityPoints;

public:
    AgilityPotion(const std::string &name);

	const std::string &getDescription() ;
	void boost(Hero *hero);
};

#endif //NONO_AGILITYPOTION_H
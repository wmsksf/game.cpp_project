#ifndef NONO_AGILITYPOTION_H
#define NONO_AGILITYPOTION_H

#include "Potion.h"

class AgilityPotion : public Potion
{
private:
	int agilityPoints;

public:
    AgilityPotion(const std::string &name);

	std::string getDescription() ;

	void boost(Hero* hero);

	Item* clone();

	int getAgilityPoints() const;

	void setAgilityPoints(int agilityPoints);
};

#endif //NONO_AGILITYPOTION_H
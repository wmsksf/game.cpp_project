
#ifndef NONO_HEALTHPOTION_H
#define NONO_HEALTHPOTION_H

#include "Potion.h"

class HealthPotion : public Potion
{
private:
	int healthPoints;

public:
    HealthPotion(const std::string &name);

	std::string getDescription();

	void boost(Hero* hero);

	Item* clone();

	int getHealthPoints() const;
	void setHealthPoints(int healthPoints);
};

#endif //NONO_HEALTHPOTION_H
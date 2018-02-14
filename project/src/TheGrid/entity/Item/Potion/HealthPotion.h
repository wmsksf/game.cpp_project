
#ifndef NONO_HEALTHPOTION_H
#define NONO_HEALTHPOTION_H

#include "Potion.h"

class HealthPotion : public Potion
{
private:
	int healthPoints;

public:
    HealthPotion(const std::string &name);

	const std::string& getDescription();

	void boost(Hero* hero) const;

	Item* clone();

	int getHealthPoints() const;
	void setHealthPoints(int healthPoints);
};

#endif //NONO_HEALTHPOTION_H
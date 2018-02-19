
#ifndef NONO_STRENGTHPOTION_H
#define NONO_STRENGTHPOTION_H

#include "Potion.h"

class StrengthPotion : public Potion
{
private:
	int strengthPoints;

public:
    StrengthPotion(const std::string &name);

	const std::string& getDescription();

	void boost(Hero* hero);

	Item* clone();

	int getStrengthPoints() const;
	void setStrengthPoints(int strengthPoints);
};

#endif //NONO_STRENGTHPOTION_H
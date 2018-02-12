
#ifndef NONO_STRENGTHPOTION_H
#define NONO_STRENGTHPOTION_H

#include "Potion.h"

class StrengthPotion : Potion
{
private:
	int strengthPoints;

public:
    StrengthPotion(const std::string &name);

 	const std::string& getDescription();

	void boost(Hero* hero) const;
};

#endif //NONO_STRENGTHPOTION_H
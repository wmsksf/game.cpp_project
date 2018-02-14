
#ifndef NONO_DEXTERITYPOTION_H
#define NONO_DEXTERITYPOTION_H

#include "Potion.h"

class DexterityPotion : public Potion
{
private:
	int dexterityPoints;

public:
    DexterityPotion(const std::string &name);

	const std::string& getDescription();

	void boost(Hero* hero) const;

	Item* clone();

	int getDexterityPoints() const;
	void setDexterityPoints(int dexterityPoints);
};

#endif //NONO_DEXTERITYPOTION_H
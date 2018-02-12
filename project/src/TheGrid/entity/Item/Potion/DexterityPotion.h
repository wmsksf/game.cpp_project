#ifndef NONO_DEXTERITYPOTION_H
#define NONO_DEXTERITYPOTION_H

#include "Potion.h"

class DexterityPotion : public Potion
{
private:
	int dexterityPoints;

public:
    DexterityPotion(const std::string &name);

	const std::string &getDescription();

	void boost(Hero *hero) const;
};

#endif //NONO_DEXTERITYPOTION_H
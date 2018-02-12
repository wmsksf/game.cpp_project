#ifndef NONO_DEXTERITYPOTION_H
#define NONO_DEXTERITYPOTION_H

#include "Potion.h"

class DexterityPotion : public Potion
{
private:
	int dexterityPoints;
public:
    DexterityPotion(const std::string &name);

	virtual const std::string &getDescription();

	virtual void boost(Hero *hero) const;
};

#endif //NONO_DEXTERITYPOTION_H
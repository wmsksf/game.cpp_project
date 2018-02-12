#ifndef NONO_MAGICPOTION_H
#define NONO_MAGICPOTION_H

#include "Potion.h"

class MagicPotion : public Potion
{
private :
	int magicPoints;

public:
    MagicPotion(const std::string &name);

	void boost(Hero *hero) const override;

	const std::string &getDescription() override;
};

#endif //NONO_MAGICPOTION_H
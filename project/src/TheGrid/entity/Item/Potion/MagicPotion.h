
#ifndef NONO_MAGICPOTION_H
#define NONO_MAGICPOTION_H

#include "Potion.h"

class MagicPotion : public Potion
{
private :
	int magicPoints;

public:
    MagicPotion(const std::string &name);

	const std::string& getDescription();

	void boost(Hero* hero);

	Item* clone();

	int getMagicPoints() const;
	void setMagicPoints(int magicPoints);
};

#endif //NONO_MAGICPOTION_H
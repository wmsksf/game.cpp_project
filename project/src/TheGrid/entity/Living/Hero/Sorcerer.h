#ifndef NONO_SORCERER_H
#define NONO_SORCERER_H

#include "Hero.h"

class Sorcerer : public Hero
{
public:
    Sorcerer(const std::string &name);

protected:
	virtual void levelUp();
};

#endif //NONO_SORCERER_H
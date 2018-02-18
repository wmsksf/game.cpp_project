
#ifndef NONO_LIVING_H
#define NONO_LIVING_H

#include <iostream>
#include <string>

class Living
{
protected:
    std::string name;

    int maxHealthPower;
	int currentHealthPower;

protected:
    int level;

public:
    Living(const std::string &name, int level);

    bool isConscious();

    virtual void displayStats();

    const std::string &getName() const;

	void restoreHealth(int healthPoints);

	int getMaxHealthPower() const;
	void setMaxHealthPower(int maxHealthPower);

	int getCurrentHealthPower() const;
	void setCurrentHealthPower(int currentHealthPower);

	int getLevel() const;
};

#endif //NONO_LIVING_H
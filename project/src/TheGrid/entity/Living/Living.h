
#ifndef NONO_LIVING_H
#define NONO_LIVING_H

#include <iostream>
#include <string>

class Living
{
protected:
    std::string name;
    std::string category;

    int maxHealthPower;
	int currentHealthPower;

protected:
    int level;

public:
    Living(const std::string &name, const std::string &category,
           int healthPower);

    bool isConscious();

    virtual void displayStats();

    const std::string &getCategory() const;

    const std::string &getName() const;

	void restoreHealth(int healthPoints);

	int getMaxHealthPower() const;
	void setMaxHealthPower(int maxHealthPower);

	int getCurrentHealthPower() const;
	void setCurrentHealthPower(int currentHealthPower);

	int getLevel() const;
};

#endif //NONO_LIVING_H
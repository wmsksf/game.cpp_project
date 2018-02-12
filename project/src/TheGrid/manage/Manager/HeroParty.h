#ifndef NONO_HEROPARTY_H
#define NONO_HEROPARTY_H

#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Living/Hero/Inventory.h"

class HeroParty
{
private:
    std::vector<Hero*> heroes;
    int x;
    int y;

protected:
    enum class MOVE{up, down, left, right};

    const MOVE& convert(const std::string& move);
public:

    const std::vector<Hero*>& getHeroes() const;

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    void move(const MOVE move);
    void move(const std::string& move);
};

#endif //NONO_HEROPARTY_H
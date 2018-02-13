#ifndef NONO_MONSTERSTATS_H
#define NONO_MONSTERSTATS_H

class Monster;

class MonsterStats
{
protected:
    int minDamage;
    int maxDamage;
    int defense;

    double dodgeProbability;

public:

    MonsterStats(Monster* monster);

    int getMinDamage() const;
    void setMinDamage(int minDamage);

    int getMaxDamage() const;
    void setMaxDamage(int maxDamage);

    int getDefense() const;
    void setDefense(int defense);

    double getDodgeProbability() const;
    void setDodgeProbability(double dodgeProbability);
};

#endif //NONO_MONSTERSTATS_H
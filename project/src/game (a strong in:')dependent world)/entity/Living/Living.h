//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_LIVING_H
#define NONO_LIVING_H

#include <iostream>
#include <string>

class Living
{
    private:
        std::string name;
        int level;
        int healthPower;

    public:
        Living(std::string,
               int, int);

        void loseConciousness();
};


#endif //NONO_LIVING_H

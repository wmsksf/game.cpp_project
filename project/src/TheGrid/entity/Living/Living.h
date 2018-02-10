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
        Living(const std::string &, int);
        Living(const std::string &, int , int);

        bool isConscious();
};


#endif //NONO_LIVING_H

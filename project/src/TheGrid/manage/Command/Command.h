//
// Created by admntiasf on 11/2/2018.
//

#ifndef NONO_COMMAND_H
#define NONO_COMMAND_H


class Command
{

public:
    virtual bool matches(std::string name) = 0;
    virtual void execute(std::vector<std::string>& args) = 0;
};;


#endif //NONO_COMMAND_H

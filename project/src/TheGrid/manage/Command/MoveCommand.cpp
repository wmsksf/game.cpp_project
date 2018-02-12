//
// Created by admntiasf on 10/2/2018.
//

#include "MoveCommand.h"
#include "../../TheGrid.h"

MoveCommand::MoveCommand(TheGrid* theGrid) : Command("move", theGrid)
{

}

void MoveCommand::execute(std::vector<std::string> &args)
{
	if(args.size() != 1)
		std::cout << "Invalid usage : move (up | down | right | left)" << std::endl;


	if(args[0].compare("up") == 0)
	{

	}else if(args[0].compare("down") == 0)
	{

	}else if(args[0].compare("left") == 0)
	{

	}else if(args[0].compare("right") == 0)
	{

	}else
	{
		std::cout << "Invalid usage : move (up | down | right | left)" << std::endl;
	}

//	theGrid->getParty()->move();

}

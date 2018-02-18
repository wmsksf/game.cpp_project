
#include "MoveCommand.h"

MoveCommand::MoveCommand()
		:Command("move", "[move (up | down | right | left)] Command to move around the grid") {}

void MoveCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
	if(theGrid->getParty()->getPartySize() == 0)
	{
		std::cout << "You must create heroes first!!" << std::endl;
		return ;
	}

	if(args.size() != 1)
		std::cout << "Invalid usage : move (up | down | right | left)" << std::endl;

	if(args[0].compare("up") == 0)
	{
		if(!theGrid->getParty()->move(up, theGrid))
		{
			std::cout << "Failed to move up!" << std::endl;
		}
	}
	else if(args[0].compare("down") == 0)
	{
		if(!theGrid->getParty()->move(down, theGrid))
		{
			std::cout << "Failed to move down!" << std::endl;
		}
	}
	else if(args[0].compare("left") == 0)
	{
		if(!theGrid->getParty()->move(left, theGrid))
		{
			std::cout << "Failed to move left!" << std::endl;
		}
	}
	else if(args[0].compare("right") == 0)
	{
		if(!theGrid->getParty()->move(right, theGrid))
		{
			std::cout << "Failed to move right!" << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid usage : move (up | down | right | left)" << std::endl;
	}
}
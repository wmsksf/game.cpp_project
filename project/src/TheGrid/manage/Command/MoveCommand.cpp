
#include "MoveCommand.h"
#include "../../TheGrid.h"

MoveCommand::MoveCommand(TheGrid* theGrid) :Command("move", theGrid) {}

void MoveCommand::execute(std::vector<std::string> &args)
{
	if(args.size() != 1)
		std::cout << "Invalid usage : move (up | down | right | left)" << std::endl;

	if(args[0].compare("up") == 0)
	{
		if(!theGrid->getParty()->move(HeroParty::direction::up, theGrid))
		{
			std::cout << "Failed to move up!" << std::endl;
		}
	}
	else if(args[0].compare("down") == 0)
	{
		if(!theGrid->getParty()->move(HeroParty::direction::down, theGrid))
		{
			std::cout << "Failed to move down!" << std::endl;
		}
	}
	else if(args[0].compare("left") == 0)
	{
		if(!theGrid->getParty()->move(HeroParty::direction::left, theGrid))
		{
			std::cout << "Failed to move left!" << std::endl;
		}
	}
	else if(args[0].compare("right") == 0)
	{
		if(!theGrid->getParty()->move(HeroParty::direction::right, theGrid))
		{
			std::cout << "Failed to move right!" << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid usage : move (up | down | right | left)" << std::endl;
	}
}
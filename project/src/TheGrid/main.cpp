
#include "TheGrid.h"

int main(int argc, char* argv[])
{
	srand(time(NULL));


	if(argc == 2)
	{
		TheGrid theGrid(argv[1]);
		theGrid.start();
	} else{
		TheGrid theGrid("../resources/");
		theGrid.start();
	}
}
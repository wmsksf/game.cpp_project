
#include <cstdlib>
#include <tgmath.h>

//returns a double number within 0 - 1.
double randomDouble()
{
    return (double) rand() / (double)RAND_MAX;
}

int randomInRange(int min, int max)
{
    return min + ((max - min) * randomDouble());
}

int randomInt(int max)
{
    return randomDouble() * max;
}

double randomDouble(double min, double max)
{
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

bool randomBool()
{
    // (int) (randomDouble() + 0.5) rounds the number to the nearest integer
    // [0,0.5) -> 0
    // [0.5,1] -> 1

    return (bool) (int)(randomDouble() + 0.5);
}
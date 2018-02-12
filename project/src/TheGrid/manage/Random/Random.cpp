#include <cstdlib>

int Random(int min, int max)
{
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

double Random(double min, double max){
    return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

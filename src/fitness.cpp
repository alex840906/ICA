#include "fitness.h"

int calFitness(veci_1D solution)
{
    int fitnessValue = 0;

    fitnessValue = pow(solution[0],5) + 3 * pow(solution[1],4) + 2 * pow(solution[2],3) + pow(solution[3],2) + solution[4] - 3;
    
    return fitnessValue;
}
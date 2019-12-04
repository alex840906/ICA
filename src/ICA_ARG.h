#ifndef ICA_ARG_H
#define ICA_ARG_H


#define solutionSize 5
#define populationSize 10
#define empireNum 2
#define cellsSize 2
#define solutionRange 5
#define alpha 0.1
inline int colonyNum = populationSize - empireNum;

#define what 0
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;
typedef vector<int> veci_1D;
typedef vector<vector<int>> veci_2D;
typedef vector<float> vecf_1D;
typedef vector<vector<float>> vecf_2D;

// inline int femaleSpider = (0.9 - (((double) rand() / (RAND_MAX)) + 1) * 0.25) * spiderNum;
// inline int maleSpider = spiderNum - femaleSpider;


//inline vec_2D HM;
//inline vec_1D scroeMatrix,scoreIndex;

#endif
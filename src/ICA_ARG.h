#ifndef SSO_ARG_H
#define SSO_ARG_H

#define spiderNum 20
#define solutionSize 100
#define PF 0.7

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;
typedef vector<int> vec_1D;
typedef vector<vector<int>> vec_2D;

inline int femaleSpider = (0.9 - (((double) rand() / (RAND_MAX)) + 1) * 0.25) * spiderNum;
inline int maleSpider = spiderNum - femaleSpider;


//inline vec_2D HM;
//inline vec_1D scroeMatrix,scoreIndex;

#endif
#ifndef Object_h
#define Object_h

#include <iostream>
#include <vector>
#include <stdio.h>
#include "ICA_ARG.h"
#include "operator.h"

using namespace std;

class Country
{
private:
    veci_1D solution;
    
    
public: 
    float cost;
    void printSolution();
    void assignColony(vector<Country>);
    void moveColonyToImperialist();
    void exchangePositions();
   
    Country(bool); //建構子
    Country();
};

inline vector<Country> empireList(empireNum, Country()); //Use vector to construct Spider
inline vector<Country> colonyList(colonyNum, Country());     //Use vector to construct Spider
inline veci_1D colonyBelong;
//inline Spider bestSpider;

#endif
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
    

public: 
    veci_1D solution;
    int empireIndex;
    int belong;
    float cost;
    float power;
    void printSolution();
    //void assignColony(vector<Country>);
    //void exchangePositions();
    //void assimilate();
    //void competition();
    void calPowerOfEmpire();

   
    Country(bool); //建構子
    Country();
};

inline vector<Country> empireList(empireNum, Country()); //Use vector to construct Country
inline vector<Country> colonyList(colonyNum, Country());     //Use vector to construct Country
inline veci_1D colonyBelong;
//inline Spider bestSpider;

#endif
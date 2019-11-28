#include "object.h"

Country::Country()
{
    solution.resize(solutionSize);

    for (int i = 0; i < solutionSize; i++)
    {
        solution[i] = rand() % 2;
    }
    cost = calFitness(solution);
}


void Country::printSolution()
{
    for (int i = 0; i < solutionSize; i++)
        cout << solution[i];
}

void Country::assignColony(vector<Country> empireList)
{

    // vecf_1D normalizeCost(empireNum, 0);
    // vecf_1D normalizePower(empireNum, 0);

    // int maxCost = empireList[0].cost;

    // for (int i = 0; i < empireList.size() - 1; i++)
    // {
    //     if (maxCost < empireList[i + 1].cost)
    //         maxCost = empireList[i + 1].cost;
    // }

    // float totalNormalizeCost = 0;
    // for (int i = 0; i < empireList.size(); i++)
    // {
    //     normalizeCost[i] = empireList[i].cost - maxCost;
    //     totalNormalizeCost += normalizeCost[i];
    // }

    // for (int i = 0; i < empireList.size(); i++)
    //     normalizePower[i] = normalizeCost[i] / totalNormalizeCost;

    // veci_1D numAssignColony(empireNum);
    // for (int i = 0; i < empireList.size(); i++)
    // {
    //     numAssignColony[i] = round_double(normalizePower[i] * colonyNum);
    // }

    // colonyBelong.resize(colonyNum);
    // veci_1D remainIndex(colonyNum);
    // int index;

    // for (int i = 0; i < colonyNum; i++)
    //     remainIndex[i] = i;

    // for (int i = 0; i < empireList.size(); i++)
    // {
    //     for (int j = 0; i < numAssignColony[j]; j++)
    //     {
    //         index = rand() % (remainIndex.size());
    //         colonyBelong[remainIndex[index]] = i;

    //         vector<int>::iterator it = remainIndex.begin();
    //         for (; it != remainIndex.end();)
    //         {
    //             if (*it == index)
    //                 it = remainIndex.erase(it);
    //             else
    //                 ++it;
    //         }
    //     }
    // }

}

void Country::moveColonyToImperialist()
{

}

void Country::exchangePositions()
{
    
}



void Country::assimilate()
{

}

void Country::calPowerOfEmpire()
{
    float costOfColonies=0;
    float meanCostOfColonies;
    int count = 0;

    for(int i=0;i<colonyBelong.size();i++)
    {
        if(colonyBelong[i]==empireIndex)
        {
            costOfColonies += colonyList[i].cost;
            count++;
        }
    }

    meanCostOfColonies = costOfColonies / count;
    power = cost + meanCostOfColonies;
}

void Country::competition()
{

}
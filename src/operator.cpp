#include "operator.h"

int round_double(double number)
{
    return (number > 0.0) ? (number + 0.5) : (number - 0.5);
}

void assignColony(vector<Country> empireList)
{
    vecf_1D normalizeCost(empireNum, 0);
    vecf_1D normalizePower(empireNum, 0);

    for (int i = 0; i < empireList.size(); i++)
        empireList[i].empireIndex = i;

    int maxCost = empireList[0].cost;

    for (int i = 0; i < empireList.size() - 1; i++)
    {
        if (maxCost < empireList[i + 1].cost)
            maxCost = empireList[i + 1].cost;
    }

    float totalNormalizeCost = 0;
    for (int i = 0; i < empireList.size(); i++)
    {
        normalizeCost[i] = empireList[i].cost - maxCost;
        totalNormalizeCost += normalizeCost[i];
    }

    for (int i = 0; i < empireList.size(); i++)
        normalizePower[i] = normalizeCost[i] / totalNormalizeCost;

    veci_1D numAssignColony(empireNum);
    for (int i = 0; i < empireList.size(); i++)
    {
        numAssignColony[i] = round_double(normalizePower[i] * colonyNum);
    }

    colonyBelong.resize(colonyNum);
    veci_1D remainIndex(colonyNum);
    int index;

    for (int i = 0; i < colonyNum; i++)
        remainIndex[i] = i;

    for (int i = 0; i < empireList.size(); i++)
    {
        for (int j = 0; i < numAssignColony[j]; j++)
        {
            index = rand() % (remainIndex.size());
            colonyBelong[remainIndex[index]] = i;
            colonyList[remainIndex[index]].belong = i;

            vector<int>::iterator it = remainIndex.begin();
            for (; it != remainIndex.end();)
            {
                if (*it == index)
                    it = remainIndex.erase(it);
                else
                    ++it;
            }
        }
    }
}

void swapObject(Country &A, Country &B)
{
    Country tmp = A;
    A = B;
    B = tmp;
}

void moveColonyToImperialist(Country colony)
{
    veci_1D flag(solutionSize, 0);
    veci_1D cells(cellsSize);
    bool critiria = 0;

    //Pick cells to copy from imperialist
    for (int i = 0; i < cellsSize; i++)
    {
        critiria = 0;
        while (critiria != 1)
        {
            cells[i] = rand() % solutionSize;
            if (flag[cells[i]] == 0)
            {
                flag[cells[i]] == 1;
                critiria = 1;
            }
        }
    }

    for (int i = 0; i < cellsSize; i++)
    {
        colony.solution[cells[i]] = empireList[colony.belong].solution[cells[i]];
    }
    colony.cost = calFitness(colony.solution);
}

void exchangePosition(Country &colony)
{
    if (colony.cost < empireList[colony.belong].cost)
        swapObject(colony, empireList[colony.belong]);
}

void competition(vector<Country> &empireList)
{
    vecf_1D nTotalPower(empireNum);
    float maxnPower;
    maxnPower = empireList[0].power;

    for (int i = 0; i < empireNum - 1; i++)
    {
        if (maxnPower < empireList[i + 1].power)
            maxnPower = empireList[i + 1].power;
    }

    float totalPower = 0;
    for (int i = 0; i < empireNum; i++)
    {
        nTotalPower[i] = empireList[i].power - maxnPower;
        totalPower += nTotalPower[i];
    }

    vecf_1D pProbability(empireNum);
    vecf_1D rVector(empireNum);
    vecf_1D dVector(empireNum);

    for (int i = 0; i < empireNum; i++)
    {
        pProbability[i] = abs(empireList[i].power / totalPower);
        rVector[i] = (double)rand() / RAND_MAX;
        dVector[i] = pProbability[i] - rVector[i];
    }
}
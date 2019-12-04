#ifndef ICA_operator_H
#define ICA_operator_H
#include "ICA_ARG.h"
#include "fitness.h"
#include "object.h"

float calDistance(vec_1D,vec_1D);
void swapObject(Spider &, Spider &);
int round_double(double);
void assignColony(vector<Country>& );
void swapObject(Country&,Country&);
void moveColonyToImperialist(Country,Country);
void exchangePosition(Country&,Country&);
void competition();

//float calAvgWeight(vector<Spider>);


#endif
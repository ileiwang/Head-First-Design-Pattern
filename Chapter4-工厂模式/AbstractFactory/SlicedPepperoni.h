#ifndef SLICED_PEPPERONI_H
#define SLICED_PEPPERONI_H
#include <stdio.h>
#include <iostream>
#include "Pepperoni.h"
using namespace std;
class SlicedPepperoni:public Pepperoni {
public:
    string toString()
    {
        return "Sliced Pepperoni";
    }
};
#endif


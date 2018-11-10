#ifndef THIN_CRUST_DOUGH_H
#define THIN_CRUST_DOUGH_H
#include <stdio.h>
#include <iostream>
#include "Dough.h"
using namespace std;
class ThinCrustDough:public Dough {
public:
    string toString()
    {
        return "Thin Crust Dough";
    }
};
#endif


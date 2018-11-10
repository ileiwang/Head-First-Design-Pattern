#ifndef THICK_CRUST_DOUGH_H
#define THICK_CRUST_DOUGH_H
#include <stdio.h>
#include <iostream>
#include "Dough.h"
using namespace std;
class ThickCrustDough:public Dough {
public:
    string toString()
    {
        return "ThickCrust style extra thick crust dough";
    }
};

#endif

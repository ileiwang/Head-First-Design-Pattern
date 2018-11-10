#ifndef PLUM_TOMATO_SAUCE_H
#define PLUM_TOMATO_SAUCE_H
#include <stdio.h>
#include <iostream>
#include "Sauce.h"
using namespace std;
class PlumTomatoSauce:public Sauce {
public:
    string toString()
    {
        return "Tomato sauce with plum tomatoes";
    }
};
#endif // MARINARA_SAUCE_H

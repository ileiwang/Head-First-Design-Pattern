#ifndef SPINACH_H
#define SPINACH_H
#include <stdio.h>
#include <iostream>
#include "Veggies.h"
using namespace std;
class Spinach:public Veggies {
public:
    string toString()
    {
        return "Spinach";
    }
};
#endif


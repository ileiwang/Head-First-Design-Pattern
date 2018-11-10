#ifndef ONION_H
#define ONION_H
#include <stdio.h>
#include <iostream>
#include "Veggies.h"
using namespace std;
class Onion:public Veggies {
public:
    string toString()
    {
        return "Onion";
    }
};
#endif // ONION_H



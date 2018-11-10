#ifndef BLACK_OLIVES_H
#define BLACK_OLIVES_H
#include <stdio.h>
#include <iostream>
#include "Veggies.h"
using namespace std;
class BlackOlives:public Veggies {
public:
    string toString()
    {
        return "Black Olives";
    }
};
#endif

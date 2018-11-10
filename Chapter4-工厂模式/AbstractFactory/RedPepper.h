#include <stdio.h>
#include <iostream>
#include "Veggies.h"
using namespace std;
class RedPepper:public Veggies {
public:
    string toString()
    {
        return "Red Pepper";
    }
};



#include <stdio.h>
#include <iostream>
#include "Cheese.h"
using namespace std;
class ReggianoCheese:public Cheese {
public:
    string toString()
    {
        return "Reggiano Cheese";
    }
};



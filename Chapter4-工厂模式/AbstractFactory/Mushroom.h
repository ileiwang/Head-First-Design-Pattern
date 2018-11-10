#include <stdio.h>
#include <iostream>
#include "Veggies.h"
using namespace std;
class Mushroom:public Veggies {
public:
    string toString()
    {
        return "Mushrooms";
    }
};



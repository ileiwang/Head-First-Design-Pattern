#include <stdio.h>
#include <iostream>
#include "Clams.h"
using namespace std;
class FrozenClams:public Clams {
public:
    string toString()
    {
        return "Frozen Clams from Chesapeake Bay";
    }
};



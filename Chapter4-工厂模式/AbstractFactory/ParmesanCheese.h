#include <stdio.h>
#include <iostream>
#include "Cheese.h"
using namespace std;
class ParmesanCheese:public Cheese {
public:
    string toString()
    {
        return "Shredded Parmesan";
    }
};



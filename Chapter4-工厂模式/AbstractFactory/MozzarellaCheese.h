#include <stdio.h>
#include <iostream>
#include "Cheese.h"
using namespace std;
class MozzarellaCheese:public Cheese {
public:
    string toString()
    {
        return "Shredded Mozzarella";
    }
};



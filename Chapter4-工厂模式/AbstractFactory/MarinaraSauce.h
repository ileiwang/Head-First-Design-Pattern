#ifndef MARINARA_SAUCE_H
#define MARINARA_SAUCE_H
#include <stdio.h>
#include <iostream>
#include "Sauce.h"
using namespace std;
class MarinaraSauce:public Sauce {
public:
    string toString()
    {
        return "Marinara Sauce";
    }
};
#endif // MARINARA_SAUCE_H

#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
using namespace std;
class PizzaStore
{
public:
    virtual Pizza* createPizza(string item) = 0;
    Pizza* orderPizza(string type)
    {
        Pizza *pizza = createPizza(type);
        cout<<"--- Making a "<<pizza->getName()<<" ---"<<endl;
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
};
#endif

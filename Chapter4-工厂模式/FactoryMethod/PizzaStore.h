#ifndef PIZZ_STORE_H
#define PIZZ_STORE_H
#include <stdio.h>
#include "Pizza.h"
#include <iostream>
using namespace std;
class PizzaStore {
public:
    virtual Pizza* createPizza(string item) = 0;
	 Pizza* orderPizza(string type) {
		Pizza* pizza = createPizza(type);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
};
#endif


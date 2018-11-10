#ifndef PIZZ_STORE_H
#define PIZZ_STORE_H
#include <stdio.h>
#include <iostream>
#include <vector>
#include "SimplePizzaFactory.h"
using namespace std;

 class PizzaStore {
	SimplePizzaFactory *factory;

public:
    PizzaStore(SimplePizzaFactory *f) {
		factory = f;
	}

	 Pizza* orderPizza(string type) {
		Pizza* pizza;
		pizza = factory->createPizza(type);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
};
#endif

#ifndef SIMPLE_PIZZA_FACTORY_H
#define SIMPLE_PIZZA_FACTORY_H
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Pizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"
using namespace std;

class SimplePizzaFactory {

public:
    Pizza* createPizza(string type) {
		Pizza *pizza = NULL;

		if (type.compare("cheese")==0) {
			pizza = new CheesePizza();
		} else if (type.compare("pepperoni")==0) {
			pizza = new PepperoniPizza();
		} else if (type.compare("clam")==0) {
			pizza = new ClamPizza();
		} else if (type.compare("veggie")==0) {
			pizza = new VeggiePizza();
		}
		return pizza;
	}
};
#endif

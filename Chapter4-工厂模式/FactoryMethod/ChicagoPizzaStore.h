#ifndef CHICAGO_PIZZA_STORE_H
#define CHICAGO_PIZZA_STORE_H
#include <stdio.h>
#include <iostream>
#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleVeggiePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
using namespace std;
 class ChicagoPizzaStore :public PizzaStore {
 public:
	Pizza* createPizza(string item) {
        	if (item.compare("cheese")==0) {
            		return new ChicagoStyleCheesePizza();
        	} else if (item.compare("veggie")==0) {
        	    	return new ChicagoStyleVeggiePizza();
        	} else if (item.compare("clam")==0) {
        	    	return new ChicagoStyleClamPizza();
        	} else if (item.compare("pepperoni")==0) {
            		return new ChicagoStylePepperoniPizza();
        	} else return NULL;
	}
};
#endif

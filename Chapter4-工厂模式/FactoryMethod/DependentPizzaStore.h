#ifndef DEPENDENT_PIZZA_STORE_H
#define DEPENDENT_PIZZA_STORE_H
#include <stdio.h>
#include <iostream>
#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleVeggiePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleVeggiePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
using namespace std;
class DependentPizzaStore {
public:
    Pizza* createPizza(string style, string type) {
		Pizza *pizza = NULL;
		if (style.compare("NY")==0) {
			if (type.compare("cheese")==0) {
				pizza = new NYStyleCheesePizza();
			} else if (type.compare("veggie")==0) {
				pizza = new NYStyleVeggiePizza();
			} else if (type.compare("clam")==0) {
				pizza = new NYStyleClamPizza();
			} else if (type.compare("pepperoni")==0) {
				pizza = new NYStylePepperoniPizza();
			}
		} else if (style.compare("Chicago")==0) {
			if (type.compare("cheese")==0) {
				pizza = new ChicagoStyleCheesePizza();
			} else if (type.compare("veggie")==0) {
				pizza = new ChicagoStyleVeggiePizza();
			} else if (type.compare("clam")==0) {
				pizza = new ChicagoStyleClamPizza();
			} else if (type.compare("pepperoni")==0) {
				pizza = new ChicagoStylePepperoniPizza();
			}
		} else {
		    cout<<"Error: invalid type of pizza"<<endl;
			return NULL;
		}
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
};
#endif

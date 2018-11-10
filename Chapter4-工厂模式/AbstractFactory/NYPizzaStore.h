#ifndef NY_PIZZA_STORE_H
#define NY_PIZZA_STORE_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
#include "PizzaStore.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "PizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
using namespace std;
class NYPizzaStore :public PizzaStore {

public:
    Pizza* createPizza(string item) {
		Pizza *pizza = NULL;
		PizzaIngredientFactory *ingredientFactory =
		new NYPizzaIngredientFactory();

		if (item.compare("cheese")==0) {

			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("New York Style Cheese Pizza");

		} else if (item.compare("veggie")==0) {

			pizza = new VeggiePizza(ingredientFactory);
			pizza->setName("New York Style Veggie Pizza");

		} else if (item.compare("clam")==0) {

			pizza = new ClamPizza(ingredientFactory);
			pizza->setName("New York Style Clam Pizza");

		} else if (item.compare("pepperoni")==0) {

			pizza = new PepperoniPizza(ingredientFactory);
			pizza->setName("New York Style Pepperoni Pizza");

		}
		return pizza;
	}
};
#endif

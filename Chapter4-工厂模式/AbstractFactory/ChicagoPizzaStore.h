#include <stdio.h>
#include <iostream>
#include "Pizza.h"
#include "PizzaStore.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
#include "PizzaIngredientFactory.h"
#include "ChicagoPizzaIngredientFactory.h"
using namespace std;
class ChicagoPizzaStore :public PizzaStore {

public:
    Pizza* createPizza(string item) {
		Pizza *pizza = NULL;
		PizzaIngredientFactory *ingredientFactory =
		new ChicagoPizzaIngredientFactory();

		if (item.compare("cheese")==0) {

			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("Chicago Style Cheese Pizza");

		} else if (item.compare("veggie")==0) {

			pizza = new VeggiePizza(ingredientFactory);
			pizza->setName("Chicago Style Veggie Pizza");

		} else if (item.compare("clam")==0) {

			pizza = new ClamPizza(ingredientFactory);
			pizza->setName("Chicago Style Clam Pizza");

		} else if (item.compare("pepperoni")==0) {

			pizza = new PepperoniPizza(ingredientFactory);
			pizza->setName("Chicago Style Pepperoni Pizza");

		}
		return pizza;
	}
};

#include <stdio.h>
#include <iostream>
#include "PizzaIngredientFactory.h"
#include "Sauce.h"
#include "Dough.h"
#include "ThickCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"
#include "Veggies.h"
#include "Cheese.h"
#include "Garlic.h"
#include "Onion.h"
#include "Mushroom.h"
#include "RedPepper.h"
#include "Pepperoni.h"
#include "SlicedPepperoni.h"
#include "Clams.h"
#include "FreshClams.h"
#include <vector>
using namespace std;
class NYPizzaIngredientFactory:public PizzaIngredientFactory {
public:
    Dough* createDough() {
		return new ThickCrustDough();
	}

	 Sauce* createSauce() {
		return new MarinaraSauce();
	}

	 Cheese* createCheese() {
		return new ReggianoCheese();
	}

	 vector<Veggies*> createVeggies() {
		vector<Veggies*> veggies;
		veggies.push_back(new Garlic());
        veggies.push_back(new Onion());
        veggies.push_back(new Mushroom());
        veggies.push_back(new RedPepper());
		return veggies;
	}

	 Pepperoni* createPepperoni() {
		return new SlicedPepperoni();
	}

	 Clams* createClam() {
		return new FreshClams();
	}
};

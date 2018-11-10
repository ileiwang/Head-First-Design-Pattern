#include <stdio.h>
#include <iostream>
#include "PizzaIngredientFactory.h"
#include "Sauce.h"
#include "Dough.h"
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "MozzarellaCheese.h"
#include "Veggies.h"
#include "Cheese.h"
#include "BlackOlives.h"
#include "Spinach.h"
#include "Eggplant.h"
#include "Pepperoni.h"
#include "SlicedPepperoni.h"
#include "Clams.h"
#include "FrozenClams.h"
#include <vector>
using namespace std;
class ChicagoPizzaIngredientFactory:public PizzaIngredientFactory {
public:
    Dough* createDough() {
		return new ThickCrustDough();
	}

	 Sauce* createSauce() {
		return new PlumTomatoSauce();
	}

	 Cheese* createCheese() {
		return new MozzarellaCheese();
	}

	 vector<Veggies*> createVeggies() {
		vector<Veggies*> veggies;
		veggies.push_back(new BlackOlives());
        veggies.push_back(new Spinach());
        veggies.push_back(new Eggplant());
		return veggies;
	}

	 Pepperoni* createPepperoni() {
		return new SlicedPepperoni();
	}

	 Clams* createClam() {
		return new FrozenClams();
	}
};

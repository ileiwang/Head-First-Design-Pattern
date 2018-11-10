#ifndef PEPPERONI_PIZZA_H
#define PEPPERONI_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
using namespace std;
 class PepperoniPizza :public Pizza {
	PizzaIngredientFactory *ingredientFactory;

public:
    PepperoniPizza(PizzaIngredientFactory *ingredient) {
		ingredientFactory = ingredient;
	}

	void prepare() {
		cout<<"Preparing "<<name<<endl;
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
		veggies = ingredientFactory->createVeggies();
		pepperoni = ingredientFactory->createPepperoni();
	}
};
#endif

#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
using namespace std;
 class CheesePizza :public Pizza {
	PizzaIngredientFactory *ingredientFactory;

public:
    CheesePizza(PizzaIngredientFactory *ingre) {
		ingredientFactory = ingre;
	}

	void prepare() {
		cout<<"Preparing "<<name<<endl;
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
	}
};
#endif

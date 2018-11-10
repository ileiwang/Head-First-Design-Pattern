#ifndef VEGGIE_PIZZA_H
#define VEGGIE_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
using namespace std;
 class VeggiePizza :public Pizza {
	PizzaIngredientFactory *ingredientFactory;

public:
    VeggiePizza(PizzaIngredientFactory *ingredient) {
		ingredientFactory = ingredient;
	}

	void prepare() {
		cout<<"Preparing "<<name<<endl;
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
		veggies = ingredientFactory->createVeggies();
	}
};
#endif

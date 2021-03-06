#ifndef CLAM_PIZZA_H
#define CLAM_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
using namespace std;
 class ClamPizza :public Pizza {
	PizzaIngredientFactory *ingredientFactory;

public:
    ClamPizza(PizzaIngredientFactory *ingredient) {
		ingredientFactory = ingredient;
	}

	void prepare() {
		cout<<"Preparing "<<name<<endl;
		dough = ingredientFactory->createDough();
		sauce = ingredientFactory->createSauce();
		cheese = ingredientFactory->createCheese();
		clam = ingredientFactory->createClam();
	}
};
#endif // CLAM_PIZZA_H

#ifndef CHICAGO_STYLE_CHEESE_PIZZA_H
#define CHICAGO_STYLE_CHEESE_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
using namespace std;
class ChicagoStyleCheesePizza :public Pizza {

public :
    ChicagoStyleCheesePizza() {
		name = "Chicago Style Deep Dish Cheese Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";
		toppings.push_back("Shredded Mozzarella Cheese");
	}

	void cut() {
	    cout<<"Cutting the pizza into square slices"<<endl;
	}
 };
#endif

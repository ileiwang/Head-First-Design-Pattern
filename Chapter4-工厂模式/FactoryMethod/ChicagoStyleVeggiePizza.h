#ifndef CHICAGO_STYLE_VEGGIE_PIZZA_H
#define CHICAGO_STYLE_VEGGIE_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
using namespace std;
class ChicagoStyleVeggiePizza :public Pizza {
public :
    ChicagoStyleVeggiePizza() {
		name = "Chicago Deep Dish Veggie Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";
		toppings.push_back("Shredded Mozzarella Cheese");
		toppings.push_back("Black Olives");
        toppings.push_back("Spinach");
		toppings.push_back("Eggplant");
	}
	void cut() {
	    cout<<"Cutting the pizza into square slices"<<endl;
	}
 };
#endif


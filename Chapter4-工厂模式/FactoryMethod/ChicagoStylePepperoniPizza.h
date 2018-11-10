#ifndef CHICAGO_STYLE_PEPPERONI_PIZZA_H
#define CHICAGO_STYLE_PEPPERONI_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
using namespace std;
class ChicagoStylePepperoniPizza :public Pizza {
public :
    ChicagoStylePepperoniPizza() {
		name = "Chicago Style Pepperoni Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";
		toppings.push_back("Shredded Mozzarella Cheese");
		toppings.push_back("Black Olives");
        toppings.push_back("Spinach");
		toppings.push_back("Eggplant");
		toppings.push_back("Sliced Pepperoni");
	}
	void cut() {
	    cout<<"Cutting the pizza into square slices"<<endl;
	}
 };
#endif


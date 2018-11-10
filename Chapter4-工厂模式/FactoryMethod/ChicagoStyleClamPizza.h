#ifndef CHICAGO_STYLE_CLAM_PIZZA_H
#define CHICAGO_STYLE_CLAM_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
using namespace std;
class ChicagoStyleClamPizza :public Pizza {
public :
    ChicagoStyleClamPizza() {
		name = "Chicago Style Clam Pizza";
		dough = "Extra Thick Crust Dough";
		sauce = "Plum Tomato Sauce";
		toppings.push_back("Shredded Mozzarella Cheese");
		toppings.push_back("Frozen Clams from Chesapeake Bay");
	}

	void cut() {
	    cout<<"Cutting the pizza into square slices"<<endl;
	}
 };
#endif


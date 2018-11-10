#ifndef NY_STYLE_CHEESE_PIZZA_H
#define NY_STYLE_CHEESE_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
using namespace std;
class NYStyleCheesePizza :public Pizza {
public :
    NYStyleCheesePizza() {
		name = "NY Style Sauce and Cheese Pizza";
		dough = "Thin Crust Dough";
		sauce = "Thin Crust Dough";
		toppings.push_back("Grated Reggiano Cheese");
	}
 };
#endif



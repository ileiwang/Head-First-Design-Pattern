#ifndef PEPPERONI_PIZZA_H
#define PEPPERONI_PIZZA_H
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Pizza.h"
using namespace std;

class PepperoniPizza :public Pizza {
public:
    PepperoniPizza() {
		name = "Pepperoni Pizza";
		dough = "Crust";
		sauce = "Marinara sauce";
		toppings.push_back("Sliced Pepperoni");
		toppings.push_back("Sliced Onion");
		toppings.push_back("Grated parmesan cheese");
	}
};
#endif

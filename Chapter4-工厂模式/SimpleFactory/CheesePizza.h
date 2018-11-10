#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Pizza.h"
using namespace std;

 class CheesePizza :public Pizza {
public:
    CheesePizza() {
		name = "Cheese Pizza";
		dough = "Regular Crust";
		sauce = "Marinara Pizza Sauce";
		toppings.push_back("Fresh Mozzarella");
		toppings.push_back("Parmesan");
	}
};
#endif

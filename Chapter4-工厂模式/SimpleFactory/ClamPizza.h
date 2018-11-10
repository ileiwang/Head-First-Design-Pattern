#ifndef CLAM_PIZZA_H
#define CLAM_PIZZA_H
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Pizza.h"
using namespace std;

class ClamPizza :public Pizza {
public:
    ClamPizza() {
		name = "Clam Pizza";
		dough = "Thin crust";
		sauce = "White garlic sauce";
		toppings.push_back("Clams");
		toppings.push_back("Grated parmesan cheese");
	}
};
#endif

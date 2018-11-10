#ifndef NY_STYLE_CLAM_PIZZA_H
#define NY_STYLE_CLAM_PIZZA_H
#include <stdio.h>
#include <iostream>
#include "Pizza.h"
using namespace std;
class NYStyleClamPizza :public Pizza {
public :
    NYStyleClamPizza() {
		name = "NY Style Clam Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara Sauce";
		toppings.push_back("Grated Reggiano Cheese");
        toppings.push_back("Fresh Clams from Long Island Sound");
	}
 };
#endif




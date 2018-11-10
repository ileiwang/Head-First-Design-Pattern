#ifndef PIZZA_H
#define PIZZA_H
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "Clams.h"
using namespace std;
class Pizza {
public:
	string name;
	Dough* dough;
	Sauce* sauce;
	vector<Veggies*> veggies;
	Cheese* cheese;
	Pepperoni* pepperoni;
	Clams* clam;

	virtual void prepare() = 0;

	void bake() {
		cout<<"Bake for 25 minutes at 350"<<endl;
	}

	void cut() {
	    cout<<"Cutting the pizza into diagonal slices"<<endl;
	}

	void box() {
        cout<<"Place pizza in official PizzaStore box"<<endl;
	}

	void setName(string n) {
		name = n;
	}

	string getName() {
		return name;
	}

	 string toString() {
		string result = "";
		result.append("---- " + name + " ----\n");
		if (dough != NULL) {
			result.append(dough->toString());
			result.append("\n");
		}
		if (sauce != NULL) {
			result.append(sauce->toString());
			result.append("\n");
		}
		if (cheese != NULL) {
			result.append(cheese->toString());
			result.append("\n");
		}
		if (veggies.size()!=0) {
			for (int i = 0; i < veggies.size(); i++) {
				result.append(veggies[i]->toString());
				if (i < veggies.size()-1) {
					result.append(", ");
				}
			}
			result.append("\n");
		}
		if (clam != NULL) {
			result.append(clam->toString());
			result.append("\n");
		}
		if (pepperoni != NULL) {
			result.append(pepperoni->toString());
			result.append("\n");
		}
		return result;
	}
};
#endif // PIZZA_H

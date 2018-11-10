#ifndef PIZZA_H
#define PIZZA_H
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Pizza
{
public:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;
public:
    string getName() {
		return name;
	}
	 void prepare() {
	     cout<<"Preparing "<<name<<endl;
	     cout<<"Tossing dough..."<<endl;
	     cout<<"Adding sauce..."<<endl;
        cout<<"Adding toppings: "<<endl;
        for (int i = 0; i < toppings.size(); i++) {
			cout<<"   "<<toppings[i]<<endl;
		}
	}
	 void bake() {
		cout<<"Bake for 25 minutes at 350"<<endl;
	}
	 void cut() {
	     cout<<"Cutting the pizza into diagonal slices"<<endl;
	}
	 void box() {
		cout<<"Place pizza in official PizzaStore box"<<endl;
	}
	 string toString() {
		string display = "";
		display.append("---- " + name + " ----\n");
		display.append(dough + "\n");
		display.append(sauce + "\n");
		for (int i = 0; i < toppings.size(); i++) {
			display.append((string )toppings[i] + "\n");
		}
		return display;
	}
};
#endif

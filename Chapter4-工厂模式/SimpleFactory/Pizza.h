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
	}

	 void bake() {
		cout<<"Baking "<<name<<endl;
	}

	 void cut() {
	     cout<<"Cutting "<<name<<endl;
	}

	 void box() {
		cout<<"Boxing "<<name<<endl;
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

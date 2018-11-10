#include <stdio.h>
#include <iostream>
using namespace std;
class Coffee {
public:
	void prepareRecipe() {
		boilWater();
		brewCoffeeGrinds();
		pourInCup();
		addSugarAndMilk();
	}

	 void boilWater() {
	     cout<<"Boiling water"<<endl;
	}

	 void brewCoffeeGrinds() {
	     cout<<"Dripping Coffee through filter"<<endl;
	}

	 void pourInCup() {
		cout<<"Pouring into cup"<<endl;
	}

	 void addSugarAndMilk() {
		cout<<"Adding Sugar and Milk"<<endl;
	}
};

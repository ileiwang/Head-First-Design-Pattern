#include <stdio.h>
#include <iostream>
using namespace std;
class Tea {
public:
	void prepareRecipe() {
		boilWater();
		steepTeaBag();
		pourInCup();
		addLemon();
	}

	 void boilWater() {
		cout<<"Boiling water"<<endl;
	}

	 void steepTeaBag() {
	     cout<<"Steeping the tea"<<endl;
	}

	 void addLemon() {
		cout<<"Adding Lemon"<<endl;

	}

	 void pourInCup() {
	     cout<<"Pouring into cup"<<endl;
	}
};

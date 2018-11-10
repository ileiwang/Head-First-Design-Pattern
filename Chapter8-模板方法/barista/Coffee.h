#include <stdio.h>
#include <iostream>
#include "CaffeineBeverage.h"
using namespace std;
class Coffee:public CaffeineBeverage
{
public:
	 void brew() {
	     cout<<"Dripping Coffee through filter"<<endl;
	}
	 void addCondiments() {
	     cout<<"Adding Sugar and Milk"<<endl;
	}
};



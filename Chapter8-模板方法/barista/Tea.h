#include <stdio.h>
#include <iostream>
#include "CaffeineBeverage.h"
using namespace std;
class Tea:public CaffeineBeverage
{
public:
	 void brew() {
	     cout<<"Steeping the tea"<<endl;
	}
	 void addCondiments() {
	     cout<<"Adding Lemon"<<endl;
	}
};


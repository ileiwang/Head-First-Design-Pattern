#ifndef CAFFEINE_BEVERAGE_H
#define CAFFEINE_BEVERAGE_H
#include <stdio.h>
#include <iostream>
using namespace std;
class CaffeineBeverage
{
public:
    void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    void boilWater(){
        cout<<"Boiling water"<<endl;
    }
    void pourInCup(){
        cout<<"Pouring into cup"<<endl;
    }
};
#endif // CAFFEINE_BEVERAGE_H

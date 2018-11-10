#ifndef CAFFEINE_BEVERAGE_WITH_HOOK_H
#define CAFFEINE_BEVERAGE_WITH_HOOK_H
#include <stdio.h>
#include <iostream>
using namespace std;
class CaffeineBeverageWithHook
{
public:
     void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments()){
            addCondiments();
        }
    }
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    void boilWater(){
        cout<<"Boiling water"<<endl;
    }
    void pourInCup(){
        cout<<"Pouring into cup"<<endl;
    }
    bool customerWantsCondiments(){
        return true;
    }
};
#endif // CAFFEINE_BEVERAGE_WITH_HOOK_H

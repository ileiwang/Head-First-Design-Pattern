#ifndef MENUCOMPONENT
#define MENUCOMPONENT
#include <iostream>
using namespace std;
class MenuComponent
{
public:
    virtual void add(MenuComponent* menuComponent)=0;
    virtual string getName() = 0;
    virtual string getDescription()=0;
    virtual double getPrice()=0;
    virtual bool isVegetarian()=0;
    virtual void print() = 0;
};
#endif // MENUCOMPONENT

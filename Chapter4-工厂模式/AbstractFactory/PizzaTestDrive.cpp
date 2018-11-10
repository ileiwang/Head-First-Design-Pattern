#include <stdio.h>
#include <iostream>
#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "Pizza.h"
using namespace std;
int main()
{
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();


    Pizza* pizza = nyStore->orderPizza("cheese");
    cout<<"Ethan ordered a " << pizza->toString()<<endl;


    pizza = chicagoStore->orderPizza("cheese");
    cout<<"Joel ordered a " << pizza->toString()<<endl;


    pizza = nyStore->orderPizza("clam");
    cout<<"Ethan ordered a " << pizza->toString()<<endl;

    pizza = chicagoStore->orderPizza("clam");
    cout<<"Joel ordered a " << pizza->toString()<<endl;

    pizza = nyStore->orderPizza("pepperoni");
    cout<<"Ethan ordered a " << pizza->toString()<<endl;

    pizza = chicagoStore->orderPizza("pepperoni");
    cout<<"Joel ordered a " << pizza->toString()<<endl;

    pizza = nyStore->orderPizza("veggie");
    cout<<"Ethan ordered a " << pizza->toString()<<endl;

    pizza = chicagoStore->orderPizza("veggie");
    cout<<"Joel ordered a " << pizza->toString()<<endl;
    return 0;
}



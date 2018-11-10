#include <stdio.h>
#include <iostream>
#include <vector>
#include "PizzaStore.h"
#include "SimplePizzaFactory.h"
using namespace std;
int main()
{
    SimplePizzaFactory *factory = new SimplePizzaFactory();
    PizzaStore *store = new PizzaStore(factory);

    Pizza *pizza = store->orderPizza("cheese");
    cout<<"We ordered a "<<pizza->getName()<<endl;

    pizza = store->orderPizza("veggie");
    cout<<"We ordered a "<<pizza->getName()<<endl;
    return 0;
}

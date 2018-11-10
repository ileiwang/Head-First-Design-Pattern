#include <stdio.h>
#include <iostream>
#include "Tea.h"
#include "Coffee.h"
using namespace std;
int main()
{
    Tea *tea = new Tea();
    Coffee *coffee = new Coffee();
    cout<<"Making tea..."<<endl;
    tea->prepareRecipe();
    cout<<"Making coffee..."<<endl;
    coffee->prepareRecipe();
    return 0;
}

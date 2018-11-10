#include <iostream>
#include <vector>
#include "Iterator.h"
#include "MenuItem.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"
using namespace std;
class Waitress
{
    PancakeHouseMenu* pancakeHouseMenu;
    DinerMenu* dinerMenu;
public:
    Waitress(PancakeHouseMenu* p, DinerMenu* d)
    {
        pancakeHouseMenu = p;
        dinerMenu = d;
    }
    void printMenu()
    {
        Iterator* pancakeIterator = pancakeHouseMenu->createIterator();
        Iterator* dinerIterator = dinerMenu->createIterator();
        cout<<"MENU\n----\nBREAKFAST"<<endl;
        printMenu(pancakeIterator);
        cout<<"\nLUNCH"<<endl;
        printMenu(dinerIterator);
    }
    void printMenu(Iterator *iter)
    {
        while (iter->hasNext())
        {
            MenuItem menuItem = iter->next();
            cout<<menuItem.getName()<<", ";
            cout<<menuItem.getPrice()<<" -- ";
            cout<<menuItem.getDescription()<<endl;
        }
    }

    void printVegetarianMenu()
    {
        printVegetarianMenu(pancakeHouseMenu->createIterator());
        printVegetarianMenu(dinerMenu->createIterator());
    }

    bool isItemVegetarian(string name)
    {
        Iterator* breakfastIterator = pancakeHouseMenu->createIterator();
        if (isVegetarian(name, breakfastIterator))
        {
            return true;
        }
        Iterator* dinnerIterator = dinerMenu->createIterator();
        if (isVegetarian(name, dinnerIterator))
        {
            return true;
        }
        return false;
    }

    void printVegetarianMenu(Iterator* iter)
    {
        while (iter->hasNext())
        {
            MenuItem menuItem = iter->next();
            if (menuItem.isVegetarian())
            {
                cout<<menuItem.getName()<<endl;
                cout<<"\t\t"<<menuItem.getPrice()<<endl;
                cout<<"\t"<<menuItem.getDescription()<<endl;
            }
        }
    }
    bool isVegetarian(string name, Iterator* iter)
    {
        while (iter->hasNext())
        {
            MenuItem menuItem = iter->next();
            if (menuItem.getName().compare(name)==0)
            {
                if (menuItem.isVegetarian())
                {
                    return true;
                }
            }
        }
        return false;
    }
};

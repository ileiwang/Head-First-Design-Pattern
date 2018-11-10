#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Iterator.h"
using namespace std;
class Menu {
public:
    virtual Iterator* createIterator() = 0;
};
#endif // MENU_H

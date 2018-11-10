#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>
#include "MenuItem.h"
using namespace std;
class Iterator
{
public:
    virtual bool hasNext() = 0;
    virtual MenuItem next() = 0;
};
#endif // ITERATOR_H

#include <iostream>
#ifndef STATE_H
#define STATE_H
using namespace std;
class GumballMachine;
class State
{
public:
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
    virtual string toString() = 0;
    GumballMachine &gumballMachine;
    State( GumballMachine &g) : gumballMachine(g){}
};
#endif

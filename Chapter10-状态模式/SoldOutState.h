#ifndef SOLDOUT_STATE_H
#define SOLDOUT_STATE_H
#include <stdio.h>
#include <iostream>
#include "State.h"
#include "GumballMachine.h"
using namespace std;
class GumballMachine;
class SoldOutState :public State
{
    GumballMachine *gumballMachine;
public:
    SoldOutState(GumballMachine *g){
        gumballMachine = g;
    }

    void insertQuarter(){
        cout<<"You can't insert a quarter, the machine is sold out"<<endl;
    }

    void ejectQuarter()
    {
        cout<<"You can't eject, you haven't inserted a quarter yet"<<endl;
    }

    void turnCrank()
    {
        cout<<"You turned, but there are no gumballs"<<endl;
    }

    void dispense()
    {
        cout<<"No gumball dispensed"<<endl;
    }

    string toString()
    {
        return "sold out";
    }
};
#endif

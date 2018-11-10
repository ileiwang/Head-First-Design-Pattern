#ifndef SOLD_STATE_H
#define SOLD_STATE_H
#include <stdio.h>
#include <iostream>
#include "State.h"
#include "GumballMachine.h"
using namespace std;
class GumballMachine;
class SoldState :public State
{
    GumballMachine *gumballMachine;
public:
    SoldState(GumballMachine *g){
        gumballMachine = g;
    }
    void insertQuarter(){
        cout<<"Please wait, we're already giving you a gumball"<<endl;
    }
    void ejectQuarter(){
        cout<<"Sorry, you already turned the crank"<<endl;
    }
    void turnCrank(){
        cout<<"Turning twice doesn't get you another gumball!"<<endl;
    }
    void dispense()
    {
        gumballMachine->releaseBall();
        if (gumballMachine->getCount() > 0){
            gumballMachine->setState(gumballMachine->getNoQuarterState());
        }
        else{
            cout<<"Oops, out of gumballs!"<<endl;
            gumballMachine->setState(gumballMachine->getSoldOutState());
        }
    }
    string toString(){
        return "dispensing a gumball";
    }
};
#endif

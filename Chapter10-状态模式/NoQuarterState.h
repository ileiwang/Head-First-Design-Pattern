#ifndef NO_QUARTER_STATE_H
#define NO_QUARTER_STATE_H
#include <stdio.h>
#include <iostream>
#include "State.h"
#include "GumballMachine.h"
using namespace std;
class GumballMachine;
class NoQuarterState :public State
{
    GumballMachine* gumballMachine;
public:
    NoQuarterState(GumballMachine* g){
        gumballMachine = g;
    }
    void insertQuarter()
    {
        cout<<"You inserted a quarter"<<endl;
        gumballMachine->setState(gumballMachine->getHasQuarterState());
    }
    void ejectQuarter(){
        cout<<"You haven't inserted a quarter"<<endl;
    }
    void turnCrank(){
        cout<<"You turned, but there's no quarter"<<endl;
    }
    void dispense(){
        cout<<"You need to pay first"<<endl;
    }
    string toString(){
        return "waiting for quarter";
    }
};
#endif

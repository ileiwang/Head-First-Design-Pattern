#ifndef HAS_QUARTER_STATE_H
#define HAS_QUARTER_STATE_H
#include <stdio.h>
#include <iostream>
#include "State.h"
#include "GumballMachine.h"
using namespace std;
class GumballMachine;
class HasQuarterState :public State
{
    GumballMachine *gumballMachine;
public:
    HasQuarterState(GumballMachine *g){
        gumballMachine = g;
    }
    void insertQuarter(){
        cout<<"You can't insert another quarter"<<endl;
    }
    void ejectQuarter()
    {
        cout<<"Quarter returned"<<endl;
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }
    void turnCrank()
    {
        cout<<"You turned..."<<endl;
        int winner = 0;
        if ((winner == 0) && (gumballMachine->getCount() > 1)){
            gumballMachine->setState(gumballMachine->getWinnerState());
        }
        else{
            gumballMachine->setState(gumballMachine->getSoldState());
        }
    }
    void dispense(){
        cout<<"No gumball dispensed"<<endl;
    }
    string toString(){
        return "waiting for turn of crank";
    }
};
#endif

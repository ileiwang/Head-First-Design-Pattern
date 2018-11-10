#ifndef WINNER_STATE_H
#define WINNER_STATE_H
#include <stdio.h>
#include <iostream>
#include "State.h"
#include "GumballMachine.h"
using namespace std;
class GumballMachine;
class WinnerState :public State
{
    GumballMachine *gumballMachine;
public:
    WinnerState(GumballMachine *g)
    {
        gumballMachine = g;
    }
    void insertQuarter()
    {
        cout<<"Please wait, we're already giving you a Gumball"<<endl;
    }

    void ejectQuarter()
    {
        cout<<"Please wait, we're already giving you a Gumball"<<endl;
    }

    void turnCrank()
    {
        cout<<"Turning again doesn't get you another gumball!"<<endl;
    }

    void dispense()
    {
        cout<<"YOU'RE A WINNER! You get two gumballs for your quarter"<<endl;
        gumballMachine->releaseBall();
        if (gumballMachine->getCount() == 0)
        {
            gumballMachine->setState(gumballMachine->getSoldOutState());
        }
        else
        {
            gumballMachine->releaseBall();
            if (gumballMachine->getCount() > 0)
            {
                gumballMachine->setState(gumballMachine->getNoQuarterState());
            }
            else
            {
                cout<<"Oops, out of gumballs!"<<endl;
                gumballMachine->setState(this.gumballMachine->getSoldOutState());
            }
        }
    }

    string toString()
    {
        return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
    }
};
#endif

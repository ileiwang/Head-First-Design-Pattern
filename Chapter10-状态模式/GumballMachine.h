#ifndef GUMBALL_MACHINE_H
#define GUMBALL_MACHINE_H
#include <stdio.h>
#include <iostream>
#include "State.h"
using namespace std;
class GumballMachine
{
private:
    class NoQuarterState :public State
    {
    public:
        NoQuarterState(GumballMachine& g):State(g){}
        void insertQuarter(){
            cout<<"You inserted a quarter"<<endl;
            gumballMachine.setState(gumballMachine.getHasQuarterState());
        }
        void ejectQuarter(){cout<<"You haven't inserted a quarter"<<endl;}
        void turnCrank(){cout<<"You turned, but there's no quarter"<<endl;}
        void dispense(){cout<<"You need to pay first"<<endl;}
        string toString(){return "waiting for quarter";}
    };
    class HasQuarterState :public State
    {
    public:
        HasQuarterState(GumballMachine &g):State(g){}
        void insertQuarter(){cout<<"You can't insert another quarter"<<endl;}
        void ejectQuarter(){
            cout<<"Quarter returned"<<endl;
            gumballMachine.setState(gumballMachine.getNoQuarterState());
        }
        void turnCrank()
        {
            cout<<"You turned..."<<endl;
            int winner = 0;
            if ((winner == 0) && (gumballMachine.getCount() > 1)){
                gumballMachine.setState(gumballMachine.getWinnerState());
            }
            else{gumballMachine.setState(gumballMachine.getSoldState());}
        }
        void dispense(){cout<<"No gumball dispensed"<<endl;}
        string toString(){return "waiting for turn of crank";}
    };
    class SoldOutState :public State
    {
    public:
        SoldOutState(GumballMachine &g):State(g){}
        void insertQuarter(){cout<<"You can't insert a quarter, the machine is sold out"<<endl;}
        void ejectQuarter(){ cout<<"You can't eject, you haven't inserted a quarter yet"<<endl;}
        void turnCrank(){ cout<<"You turned, but there are no gumballs"<<endl;}
        void dispense(){cout<<"No gumball dispensed"<<endl;}
        string toString(){return "sold out";}
    };
    class SoldState :public State
    {
    public:
        SoldState(GumballMachine &g):State(g){}
        void insertQuarter(){cout<<"Please wait, we're already giving you a gumball"<<endl;}
        void ejectQuarter(){cout<<"Sorry, you already turned the crank"<<endl;}
        void turnCrank(){cout<<"Turning twice doesn't get you another gumball!"<<endl;}
        void dispense()
        {
            gumballMachine.releaseBall();
            if (gumballMachine.getCount() > 0){
                gumballMachine.setState(gumballMachine.getNoQuarterState());
            }
            else{
                cout<<"Oops, out of gumballs!"<<endl;
                gumballMachine.setState(gumballMachine.getSoldOutState());
            }
        }
        string toString(){return "dispensing a gumball";}
    };
    class WinnerState :public State
    {
    public:
        WinnerState(GumballMachine &g):State(g){}
        void insertQuarter(){cout<<"Please wait, we're already giving you a Gumball"<<endl;}
        void ejectQuarter(){cout<<"Please wait, we're already giving you a Gumball"<<endl;}
        void turnCrank(){cout<<"Turning again doesn't get you another gumball!"<<endl;}
        void dispense()
        {
            cout<<"YOU'RE A WINNER! You get two gumballs for your quarter"<<endl;
            gumballMachine.releaseBall();
            if (gumballMachine.getCount() == 0){
                gumballMachine.setState(gumballMachine.getSoldOutState());
            }
            else{
                gumballMachine.releaseBall();
                if (gumballMachine.getCount() > 0){
                    gumballMachine.setState(gumballMachine.getNoQuarterState());
                }
                else{
                    cout<<"Oops, out of gumballs!"<<endl;
                    gumballMachine.setState(gumballMachine.getSoldOutState());
                }
            }
        }
        string toString(){return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";}
    };
    SoldOutState soldOutState;
    NoQuarterState noQuarterState;
    HasQuarterState hasQuarterState;
    SoldState soldState;
    WinnerState winnerState;
    State *state = &soldOutState;
    int count;
public:
    GumballMachine(int numberGumballs):soldOutState(*this),noQuarterState(*this),hasQuarterState(*this),
    soldState(*this),winnerState(*this)
    {
        count = numberGumballs;
        state = &soldOutState;
    }
    void insertQuarter(){state->insertQuarter();}
    void ejectQuarter(){state->ejectQuarter();}
    void turnCrank(){
        state->turnCrank();
        state->dispense();
    }
    void setState(State *s){state = s;}
    void releaseBall(){
        cout<<"A gumball comes rolling out the slot..."<<endl;
        if (count != 0){count-=1;}
    }
    int getCount(){return count;}
    void refill(int c){
        count = c;
        state = &noQuarterState;
    }
    State* getState(){return state;}
    State* getSoldOutState(){return &soldOutState;}
    State* getNoQuarterState(){return &noQuarterState;}
    State* getHasQuarterState(){return &hasQuarterState;}
    State* getSoldState(){return &soldState;}
    State* getWinnerState(){return &winnerState;}
    string toString(){
        string result = "";
        result.append("\nMighty Gumball, Inc.");
        result.append("\nJava-enabled Standing Gumball Model #2004");
        result.append("\nInventory: ");
        result.append(" gumball");
        if (count != 1){result.append("s");}
        result.append("\n");
        result.append("Machine is " + state->toString() + "\n");
        return result;
    }
};
#endif

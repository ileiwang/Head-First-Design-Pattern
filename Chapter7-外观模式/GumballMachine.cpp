#include <stdio.h>
#include <iostream>
#include "State.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"
#include "WinnerState.h"
#include "GumballMachine.h"
using namespace std;

GumballMachine::GumballMachine(int numberGumballs)
{
    soldOutState = new SoldOutState(this);
    noQuarterState = new NoQuarterState(this);
    hasQuarterState = new HasQuarterState(this);
    soldState = new SoldState(this);
    winnerState = new WinnerState(this);
    count = numberGumballs;
    if (numberGumballs > 0)
    {
        state = noQuarterState;
    }
}
};

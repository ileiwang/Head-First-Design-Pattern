#ifndef POPCORN_POPPER_H
#define POPCORN_POPPER_H
#include <stdio.h>
#include <iostream>
using namespace std;
class PopcornPopper
{
    string description;
public:
    PopcornPopper(string d){
        description = d;
    }
    void on(){
        cout<<description<<" on"<<endl;
    }
    void off(){
        cout<<description<<" off"<<endl;
    }
    void pop(){
        cout<<description<<" popping popcorn!"<<endl;
    }
    string toString(){
        return description;
    }
};
#endif // POPCORN_POPPER_H

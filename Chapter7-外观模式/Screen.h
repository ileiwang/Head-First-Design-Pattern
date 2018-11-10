#ifndef SCREEN_H
#define SCREEN_H
#include <stdio.h>
#include <iostream>
using namespace std;
class Screen
{
    string description;
public:
    Screen(string d){
        description = d;
    }
    void up(){
        cout<<description<<" going up"<<endl;
    }
    void down(){
        cout<<description<<" going down"<<endl;
    }
    string toString(){
        return description;
    }
};
#endif // SCREEN_H

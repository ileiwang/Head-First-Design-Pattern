#ifndef THEATER_LIGHTS_H
#define THEATER_LIGHTS_H
#include <stdio.h>
#include <iostream>
using namespace std;
class TheaterLights
{
    string description;
public:
    TheaterLights(string d){
        description = d;
    }
    void on(){
        cout<<description<<" on"<<endl;
    }
    void off(){
        cout<<description<<" off"<<endl;
    }
    void dim(int level){
        cout<<description<<" dimming to "<<level<<"%"<<endl;
    }
    string toString(){
        return description;
    }
};
#endif // THEATER_LIGHTS_H

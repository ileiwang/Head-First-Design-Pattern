#ifndef TUNER_H
#define TUNER_H
#include <stdio.h>
#include <iostream>
#include "Amplifier.h"
using namespace std;
class Amplifier;
class Tuner {
    string description;
    Amplifier *amplifier;
    double frequency;
    public:
        Tuner(string d, Amplifier *a) {
        description = d;
        amplifier = a;
    }
     void on() {
        cout<<description<<" on"<<endl;
    }
     void off() {
        cout<<description<<" off"<<endl;
    }
     void setFrequency(double f) {
        cout<<description<<" setting frequency to "<<frequency<<endl;
        frequency = f;
    }
     void setAm() {
        cout<<description<<" setting AM mode"<<endl;
    }
     void setFm() {
        cout<<description<<" setting FM mode"<<endl;
    }
    string toString() {
        return description;
    }
};
#endif // TUNER_H

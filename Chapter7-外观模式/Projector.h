#ifndef PROJECTOR_H
#define PROJECTOR_H
#include <stdio.h>
#include <iostream>
#include "DvdPlayer.h"
using namespace std;
class Projector {
    string description;
    DvdPlayer *dvdPlayer;
    public:
        Projector(string d, DvdPlayer *dvd) {
        description = d;
        dvdPlayer = dvd;
    }
     void on() {
        cout<<description<<" on"<<endl;
    }
     void off() {
        cout<<description<<" off"<<endl;
    }
     void wideScreenMode() {
        cout<<description<<" in widescreen mode (16x9 aspect ratio)"<<endl;
    }
     void tvMode() {
        cout<<description<<" in tv mode (4x3 aspect ratio)"<<endl;
     }
    string toString() {
        return description;
    }
};
#endif // PROJECTOR_H

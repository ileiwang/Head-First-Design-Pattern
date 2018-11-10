#ifndef AMPLIFIER_H
#define AMPLIFIER_H
#include <stdio.h>
#include <iostream>
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
using namespace std;
class Tuner;
class DvdPlayer;
class CdPlayer;
class Amplifier {
    string description;
    Tuner *tuner;
    DvdPlayer *dvd;
    CdPlayer *cd;
    public:
        Amplifier(string d) {
        description = d;
    }
     void on() {
        cout<<description<<" on"<<endl;
    }
     void off() {
        cout<<description<<" off"<<endl;
    }
    void setStereoSound() {
        cout<<description<<" stereo mode on"<<endl;
    }
     void setSurroundSound() {
        cout<<description<<" surround sound on (5 speakers, 1 subwoofer)"<<endl;
    }
     void setVolume(int level) {
        cout<<description<<" setting volume to "<<level<<endl;
    }
     void setTuner(Tuner *t) {
        cout<<description<<" setting tuner to "<<dvd<<endl;
        tuner = t;
    }
     void setDvd(DvdPlayer* d) {
        cout<<description<<" setting DVD player to "<<dvd<<endl;
        dvd = d;
    }
     void setCd(CdPlayer *c) {
        cout<<description<<" setting CD player to "<<cd<<endl;
        cd = c;
    }
     string toString() {
        return description;
    }
};
#endif // AMPLIFIER_H

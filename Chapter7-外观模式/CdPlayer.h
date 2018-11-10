#ifndef CD_PLAYER_H
#define CD_PLAYER_H
#include <stdio.h>
#include <iostream>
#include "Amplifier.h"
using namespace std;
class Amplifier;
class CdPlayer {
    string description;
    int currentTrack;
    Amplifier *amplifier;
    string title;
    public :
    CdPlayer(string d, Amplifier* a) {
        description = d;
        amplifier = a;
    }
    void on() {
        cout<<description<<" on"<<endl;
    }
     void off() {
        cout<<description<<" off"<<endl;
    }
     void eject() {
        title = "";
        cout<<description<<" eject"<<endl;
    }
     void play(string t) {
        title = t;
        currentTrack = 0;
        cout<<description<<" playing"<<title<<endl;
    }
     void play(int track) {
        if (title == "") {
            cout<<description<<" can't play track "<<currentTrack<<", no cd inserted"<<endl;
        } else {
            currentTrack = track;
            cout<<description<<" playing track "<<currentTrack<<endl;
        }
    }
     void stop() {
        currentTrack = 0;
        cout<<description<<" stopped"<<endl;
    }
     void pause() {
        cout<<description<<" paused "<<title<<endl;
    }
     string toString() {
        return description;
    }
};
#endif // CD_PLAYER_H

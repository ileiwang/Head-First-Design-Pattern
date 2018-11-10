#ifndef DVD_PLAYER_H
#define DVD_PLAYER_H
#include <stdio.h>
#include <iostream>
#include "Amplifier.h"
using namespace std;
class Amplifier;
class DvdPlayer {
    string description;
    int currentTrack;
    Amplifier *amplifier;
    string movie;
    public:
        DvdPlayer(string d, Amplifier *a) {
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
        movie = "";
        cout<<description<<" eject"<<endl;
        }
     void play(string m) {
        movie = m;
        currentTrack = 0;
        cout<<description<<" playing" <<movie<<endl;
    }
     void play(int track) {
        if (movie == "") {
            cout<<description<<" can't play track "<<track<<" no dvd inserted"<<endl;
        } else {
            currentTrack = track;
            cout<<description<<" playing track "<<currentTrack<<" of" <<movie<<endl;
        }
    }
     void stop() {
        currentTrack = 0;
        cout<<description<<" stopped " <<movie<<endl;
    }
     void pause() {
        cout<<description<<" paused "<<movie<<endl;
    }
     void setTwoChannelAudio() {
        cout<<description<<" set two channel audio"<<endl;
    }
     void setSurroundAudio() {
        cout<<description<<" set surround audio"<<endl;
    }
     string toString() {
        return description;
    }
};
#endif // DVD_PLAYER_H

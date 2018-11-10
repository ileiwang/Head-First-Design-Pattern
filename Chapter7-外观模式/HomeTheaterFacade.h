#ifndef HOME_THEATER_FACED_H
#define HOME_THEATER_FACED_H
#include <stdio.h>
#include <iostream>
#include "Amplifier.h"
#include "TheaterLights.h"
#include "CdPlayer.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "Projector.h"
#include "Screen.h"
#include "PopcornPopper.h"
using namespace std;
class HomeTheaterFacade {
    Amplifier *amp;
    Tuner *tuner;
    DvdPlayer *dvd;
    CdPlayer *cd;
    Projector *projector;
    TheaterLights *lights;
    Screen *screen;
    PopcornPopper *popper;
    public:
        HomeTheaterFacade(Amplifier *a,
                 Tuner *t,
                 DvdPlayer *d,
                 CdPlayer *c,
                 Projector *p,
                 Screen *s,
                 TheaterLights *l,
                 PopcornPopper *po) {
        amp = a;
        tuner = t;
        dvd = d;
        cd = c;
        projector = p;
        screen = s;
        lights = l;
        popper = po;
    }
     void watchMovie(string movie) {
        cout<<"Get ready to watch a movie..."<<endl;
        popper->on();
        popper->pop();
        lights->dim(10);
        screen->down();
        projector->on();
        projector->wideScreenMode();
        amp->on();
        amp->setDvd(dvd);
        amp->setSurroundSound();
        amp->setVolume(5);
        dvd->on();
        dvd->play(movie);
    }
     void endMovie() {
        cout<<"Shutting movie theater down..."<<endl;
        popper->off();
        lights->on();
        screen->up();
        projector->off();
        amp->off();
        dvd->stop();
        dvd->eject();
        dvd->off();
    }
     void listenToCd(string cdTitle) {
        cout<<"Get ready for an audiopile experence..."<<endl;
        lights->on();
        amp->on();
        amp->setVolume(5);
        amp->setCd(cd);
        amp->setStereoSound();
        cd->on();
        cd->play(cdTitle);
    }
     void endCd() {
        cout<<"Shutting down CD..."<<endl;
        amp->off();
        amp->setCd(cd);
        cd->eject();
        cd->off();
    }
     void listenToRadio(double frequency) {
        cout<<"Tuning in the airwaves..."<<endl;
        tuner->on();
        tuner->setFrequency(frequency);
        amp->on();
        amp->setVolume(5);
        amp->setTuner(tuner);
    }
     void endRadio() {
        cout<<"Shutting down the tuner..."<<endl;
        tuner->off();
        amp->off();
    }
};
#endif // HOME_THEATER_FACED_H

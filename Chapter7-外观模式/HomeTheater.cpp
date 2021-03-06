#include <stdio.h>
#include <iostream>
#include "Amplifier.h"
#include "Tuner.h"
#include "CdPlayer.h"
#include "DvdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
#include "HomeTheaterFacade.h"
using namespace std;
int main()
{
    Amplifier *amp = new Amplifier("Top-O-Line Amplifier");
    Tuner *tuner = new Tuner("Top-O-Line AM/FM Tuner", amp);
    DvdPlayer *dvd = new DvdPlayer("Top-O-Line DVD Player", amp);
    CdPlayer *cd = new CdPlayer("Top-O-Line CD Player", amp);
    Projector *projector = new Projector("Top-O-Line Projector", dvd);
    TheaterLights *lights = new TheaterLights("Theater Ceiling Lights");
    Screen *screen = new Screen("Theater Screen");
    PopcornPopper *popper = new PopcornPopper("Popcorn Popper");
    HomeTheaterFacade *homeTheater =
        new HomeTheaterFacade(amp, tuner, dvd, cd,
                              projector, screen, lights, popper);
    homeTheater->watchMovie("Raiders of the Lost Ark");
    homeTheater->endMovie();
    return 0;
}

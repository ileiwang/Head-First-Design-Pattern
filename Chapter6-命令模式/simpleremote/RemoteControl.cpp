#include <stdio.h>
#include <iostream>
using namespace std;
class Command
{
public:
    virtual void execute() = 0;
};

class Light
{
public:
    Light() {}
    void on(){
        cout<<"Light is on"<<endl;
    }
    void off(){
        cout<<"Light is off"<<endl;
    }
};

class GarageDoor
{
public:
    GarageDoor() {}
    void up(){
        cout<<"Garage Door is Open"<<endl;
    }
    void down(){
        cout<<"Garage Door is Closed"<<endl;
    }
    void stop(){
        cout<<"Garage Door is Stopped"<<endl;
    }
    void lightOn(){
        cout<<"Garage light is on"<<endl;
    }
    void lightOff(){
        cout<<"Garage light is off"<<endl;
    }
};

class LightOnCommand:public Command
{
public:
    Light *light;
    LightOnCommand(Light *l):light(l) {}
    void execute()
    {
        light->on();
    }

};
class LightOffCommand:public Command
{
public:
    Light *light;
    LightOffCommand(Light *l):light(l) {}
    void execute(){
        light->off();
    }

};
class GarageDoorOpenCommand:public Command
{
public:
    GarageDoor* garageDoor;
    GarageDoorOpenCommand(GarageDoor* g){
        garageDoor = g;
    }
    void execute(){
        garageDoor->up();
    }
};

class SimpleRemoteControl
{
public:
    Command * slot;
    SimpleRemoteControl() {}
    void setCommand(Command *c){slot = c;}
    void buttonWasPressed(){
        slot->execute();
    }
};

int main()
{
    SimpleRemoteControl* remote = new SimpleRemoteControl();
    Light *light = new Light();
    GarageDoor *garageDoor = new GarageDoor();
    LightOnCommand *lightOn = new LightOnCommand(light);
    GarageDoorOpenCommand *garageOpen =
        new GarageDoorOpenCommand(garageDoor);
    remote->setCommand(lightOn);
    remote->buttonWasPressed();
    remote->setCommand(garageOpen);
    remote->buttonWasPressed();
    return 0;
}


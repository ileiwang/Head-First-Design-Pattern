#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Command
{
public:
       virtual void execute() = 0;
};
class Light
{
    string location = "";
public:
    Light(string l){
        location = l;
    }
    void on(){
        cout<<location<<" light is on"<<endl;
    }
    void off(){
        cout<<location<<" light is off"<<endl;
    }
};
class GarageDoor
{
    string location;
public:
    GarageDoor(string l){
        location = l;
    }
    void up(){
        cout<<location<<" garage Door is Up"<<endl;
    }
    void down(){
        cout<<location<<" garage Door is Down"<<endl;
    }
    void stop(){
        cout<<location<<" garage Door is Stopped"<<endl;
    }
    void lightOn(){
        cout<<location<<" garage light is on"<<endl;
    }
    void lightOff(){
        cout<<location<<" garage light is off"<<endl;
    }
};
class CeilingFan
{
    string location = "";
    int level;
public:
    int HIGH = 2;
    int MEDIUM = 1;
    int LOW = 0;
    CeilingFan(string l){
        location = l;
    }
    void high()
    {
        level = HIGH;
        cout<<location<<" ceiling fan is on high"<<endl;
    }
    void medium()
    {
        level = MEDIUM;
        cout<<location<<" ceiling fan is on medium"<<endl;
    }
    void low()
    {
        level = LOW;
        cout<<location<<" ceiling fan is on low"<<endl;
    }
    void off()
    {
        level = 0;
        cout<<location<<" ceiling fan is off"<<endl;
    }
    int getSpeed(){
        return level;
    }
};
class Hottub
{
    bool On;
    int temperature;
public:
    Hottub() {}
    void on(){
        On = true;
    }
    void off(){
        On = false;
    }
    void bubblesOn()
    {
        if (On){
            cout<<"Hottub is bubbling!"<<endl;
        }
    }
    void bubblesOff()
    {
        if (On){
            cout<<"Hottub is not bubbling"<<endl;
        }
    }
    void jetsOn()
    {
        if (On){
            cout<<"Hottub jets are on"<<endl;
        }
    }
    void jetsOff()
    {
        if (On){
            cout<<"Hottub jets are off"<<endl;
        }
    }
    void setTemperature(int t){
        temperature = t;
    }
    void heat(){
        temperature = 105;
        cout<<"Hottub is heating to a steaming 105 degrees"<<endl;
    }
    void cool(){
        temperature = 98;
        cout<<"Hottub is cooling to 98 degrees"<<endl;
    }
};
class Stereo
{
    string location;
public:
    Stereo(string l){
        location = l;
    }
    void on(){
        cout<<location<<" stereo is on"<<endl;
    }
    void off(){
        cout<<location<<" stereo is off"<<endl;
    }
    void setCD(){
        cout<<location<<" stereo is set for CD input"<<endl;
    }
    void setDVD(){
        cout<<location<<" stereo is set for DVD input"<<endl;
    }
    void setRadio(){
        cout<<location<<" stereo is set for Radio"<<endl;
    }
    void setVolume(int volume){
        cout<<location<<" Stereo volume set to "<<volume<<endl;
    }
};
class TV
{
    string location;
    int channel;
public:
    TV(string l){
        location = l;
    }
    void on(){
        cout<<"TV is on"<<endl;
    }
    void off(){
        cout<<"TV is off"<<endl;
    }
    void setInputChannel()
    {
        channel = 3;
        cout<<"Channel is set for VCR"<<endl;
    }
};
class NoCommand:public Command
{
public:
    void execute() {}
};
class LightOnCommand:public Command
{
public:
    Light *light;
    LightOnCommand(Light *l):light(l) {}
    void execute(){
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
class LivingroomLightOnCommand :public Command
{
    Light *light;
public :
    LivingroomLightOnCommand(Light *l){
        light = l;
    }
    void execute(){
        light->on();
    }
};
class LivingroomLightOffCommand :public Command
{
    Light *light;
public:
    LivingroomLightOffCommand(Light *l){
        light = l;
    }
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
class CeilingFanOffCommand :public Command
{
    CeilingFan* ceilingFan;
public:
    CeilingFanOffCommand(CeilingFan *c){
        ceilingFan = c;
    }
    void execute(){
        ceilingFan->off();
    }
};
class CeilingFanOnCommand :public Command
{
    CeilingFan *ceilingFan;
public:
    CeilingFanOnCommand(CeilingFan *c){
        ceilingFan = c;
    }
    void execute(){
        ceilingFan->high();
    }
};
class GarageDoorDownCommand :public Command
{
    GarageDoor *garageDoor;
public:
    GarageDoorDownCommand(GarageDoor *g){
        garageDoor = g;
    }
    void execute(){
        garageDoor->up();
    }
};
class GarageDoorUpCommand : public Command
{
    GarageDoor *garageDoor;
public:
    GarageDoorUpCommand(GarageDoor *g){
        garageDoor = g;
    }
    void execute(){
        garageDoor->up();
    }
};
class HottubOffCommand : public Command
{
    Hottub *hottub;
public:
    HottubOffCommand(Hottub *h){
        hottub = h;
    }
    void execute()
    {
        hottub->cool();
        hottub->off();
    }
};
class HottubOnCommand:public Command
{
    Hottub *hottub;
public :
    HottubOnCommand(Hottub *h){
        hottub = h;
    }
    void execute()
    {
        hottub->on();
        hottub->heat();
        hottub->bubblesOn();
    }
};
class StereoOffCommand : public  Command
{
    Stereo *stereo;
public:
    StereoOffCommand(Stereo *s){
        stereo = s;
    }
    void execute(){
        stereo->off();
    }
};
class StereoOnWithCDCommand:public Command
{
    Stereo *stereo;
public:
    StereoOnWithCDCommand(Stereo *s){
        stereo = s;
    }
    void execute()
    {
        stereo->on();
        stereo->setCD();
        stereo->setVolume(11);
    }
};
class RemoteControl
{
    vector<Command*> onCommands;
    vector<Command*> offCommands;
public:
    RemoteControl()
    {
        Command *noCommand = new NoCommand();
        for (int i = 0; i < 7; i++)
        {
            onCommands.push_back(noCommand);
            offCommands.push_back(noCommand);
        }
    }
    void setCommand(int slot, Command *onCommand, Command *offCommand){
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }
    void onButtonWasPushed(int slot){
        onCommands[slot]->execute();
    }
    void offButtonWasPushed(int slot){
        offCommands[slot]->execute();
    }
};
int main()
{
    RemoteControl *remoteControl = new RemoteControl();
    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    CeilingFan *ceilingFan= new CeilingFan("Living Room");
    GarageDoor *garageDoor = new GarageDoor("");
    Stereo *stereo = new Stereo("Living Room");
    LightOnCommand *livingRoomLightOn =
        new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff =
        new LightOffCommand(livingRoomLight);
    LightOnCommand *kitchenLightOn =
        new LightOnCommand(kitchenLight);
    LightOffCommand *kitchenLightOff =
        new LightOffCommand(kitchenLight);
    CeilingFanOnCommand *ceilingFanOn =
        new CeilingFanOnCommand(ceilingFan);
    CeilingFanOffCommand *ceilingFanOff =
        new CeilingFanOffCommand(ceilingFan);
    GarageDoorUpCommand *garageDoorUp =
        new GarageDoorUpCommand(garageDoor);
    GarageDoorDownCommand *garageDoorDown =
        new GarageDoorDownCommand(garageDoor);
    StereoOnWithCDCommand *stereoOnWithCD =
        new StereoOnWithCDCommand(stereo);
    StereoOffCommand  *stereoOff =
        new StereoOffCommand(stereo);
    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, ceilingFanOn, ceilingFanOff);
    remoteControl->setCommand(3, stereoOnWithCD, stereoOff);
    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);
    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPushed(2);
    remoteControl->onButtonWasPushed(3);
    remoteControl->offButtonWasPushed(3);
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class DisplayElement
{
public:
    virtual void display() = 0;
};
class Observer
{
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
};
class Subject
{
public:
    virtual void registerObserver(Observer *o) = 0;
    virtual void removeObserver(Observer *o) = 0;
    virtual void notifyObservers() = 0;
};
class WeatherData:public Subject
{
private:
    vector<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;
public:
    WeatherData(){}
    void registerObserver(Observer *o){
        observers.push_back(o);
    }
    void removeObserver(Observer *o)
    {
        vector<Observer *>::iterator found = find(observers.begin(), observers.end(), o);
        if (found != observers.end()){
            observers.erase(found);
        }
    }
    void notifyObservers()
    {
        for(vector<Observer *>::iterator it = observers.begin(); it != observers.end(); it++){
            (*it)->update(temperature, humidity, pressure);
        }
    }
    void measurementsChanged(){
        notifyObservers();
    }
    void setMeasurements(float temperature, float humidity, float pressure)
    {
        temperature = temperature;
        humidity = humidity;
        pressure = pressure;
        measurementsChanged();
    }
    float getTemperature(){
        return temperature;
    }
    float getHumidity(){
        return humidity;
    }
    float getPressure(){
        return pressure;
    }
};
class ForecastDisplay:public Observer,public DisplayElement
{
private:
    float currentPressure = 29.92f;
    float lastPressure;
    WeatherData *weatherData;
public:
    ForecastDisplay(WeatherData *weatherData)
    {
        weatherData = weatherData;
        weatherData->registerObserver(this);
    }
    void update(float temp, float humidity, float pressure)
    {
        lastPressure = currentPressure;
        currentPressure = pressure;
        display();
    }
    void display()
    {
        cout<<"Forecast: "<<endl;
        if (currentPressure > lastPressure){
            cout<<"Improving weather on the way!"<<endl;
        }
        else if (currentPressure == lastPressure){
            cout<<"More of the same"<<endl;
        }
        else if (currentPressure < lastPressure){
            cout<<"Watch out for cooler, rainy weather"<<endl;
        }
    }
};
class CurrentConditionsDisplay:public Observer,public DisplayElement
{
private:
    float temperature;
    float humidity;
    Subject *weatherData;
public:
    CurrentConditionsDisplay(Subject *weatherData)
    {
        weatherData = weatherData;
        weatherData->registerObserver(this);
    }
    void update(float temperature, float humidity, float pressure)
    {
        temperature = temperature;
        humidity = humidity;
        display();
    }
    void display(){
        cout<<"Current conditions: "<<temperature<<"F degrees and "<<humidity<<"% humidity"<<endl;
    }
};
class HeatIndexDisplay:public Observer,public DisplayElement
{
private:
    float heatIndex = 0.0f;
    WeatherData *weatherData;
    float computeHeatIndex(float t, float rh)
    {
        float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh)
                               + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh))
                               + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
                               (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *
                                       (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
                               (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
                               0.000000000843296 * (t * t * rh * rh * rh)) -
                              (0.0000000000481975 * (t * t * t * rh * rh * rh)));
        return index;
    }
public:
    HeatIndexDisplay(WeatherData *weatherData)
    {
        weatherData = weatherData;
        weatherData->registerObserver(this);
    }
    void update(float t, float rh, float pressure)
    {
        heatIndex = computeHeatIndex(t, rh);
        display();
    }
    void display(){
        cout<<"Heat index is "<<heatIndex<<endl;
    }
};
class StatisticsDisplay:public Observer,public DisplayElement
{
private:
    float maxTemp = 0.0f;
    float minTemp = 200;
    float tempSum= 0.0f;
    int numReadings;
    WeatherData *weatherData;
public:
    StatisticsDisplay(WeatherData *weatherData)
    {
        weatherData = weatherData;
        weatherData->registerObserver(this);
    }
    void update(float temp, float humidity, float pressure)
    {
        tempSum += temp;
        numReadings++;
        if (temp > maxTemp){
            maxTemp = temp;
        }
        if (temp < minTemp){
            minTemp = temp;
        }
        display();
    }
    void display(){
        cout<<"Avg/Max/Min temperature = "<<tempSum / numReadings<<"/"<<maxTemp<<"/"<<minTemp<<endl;
    }
};




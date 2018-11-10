#include <iostream>
#include <stdio.h>
using namespace std;
class Singleton
{
protected:
    static Singleton* uniqueInstance;
    Singleton() {}
public:
    static Singleton * getInstance()
    {
        if(uniqueInstance == NULL){
            uniqueInstance = new Singleton();
        }
        return uniqueInstance;
    }
};
Singleton* Singleton::uniqueInstance = NULL;
class HotterSingleton:public Singleton
{
private:
    HotterSingleton():Singleton() {}
};
class CoolerSingleton:public Singleton
{
private:
    CoolerSingleton():Singleton() {}
};
int main()
{
    Singleton * foo = CoolerSingleton::getInstance();
    Singleton * bar = HotterSingleton::getInstance();
    cout<<foo<<endl;
    cout<<bar<<endl;
    return 0;
}

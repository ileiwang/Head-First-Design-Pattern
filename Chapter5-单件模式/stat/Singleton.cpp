#include <iostream>
#include <stdio.h>
using namespace std;
class Singleton
{
private:
    static Singleton* uniqueInstance;
    Singleton(){}
public:
    static Singleton* getInstance(){
        return uniqueInstance;
    }
};
Singleton* Singleton::uniqueInstance = new Singleton();
int main()
{
    Singleton *singleton = Singleton::getInstance();
    return 0;
}

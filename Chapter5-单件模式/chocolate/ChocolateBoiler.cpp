#include <iostream>
#include <stdio.h>
using namespace std;
class ChocolateBoiler
{
private:
    bool empty;
    bool boiled;
    static ChocolateBoiler *uniqueInstance;
    ChocolateBoiler()
    {
        empty = true;
        boiled = false;
    }
public:
    static ChocolateBoiler* getInstance()
    {
        if (uniqueInstance == NULL)
        {
            cout<<"Creating unique instance of Chocolate Boiler"<<endl;
            uniqueInstance = new ChocolateBoiler();
        }
        cout<<"Returning instance of Chocolate Boiler"<<endl;
        return uniqueInstance;
    }
    void fill()
    {
        if (isEmpty())
        {
            empty = false;
            boiled = false;
        }
    }
    void drain()
    {
        if (!isEmpty() && isBoiled()){
            empty = true;
        }
    }
    void boil()
    {
        if (!isEmpty() && !isBoiled()){
            boiled = true;
        }
    }
    bool isEmpty(){
        return empty;
    }
    bool isBoiled(){
        return boiled;
    }
};
ChocolateBoiler * ChocolateBoiler::uniqueInstance = NULL;
int main()
{
    ChocolateBoiler *boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();
    ChocolateBoiler *boiler2 = ChocolateBoiler::getInstance();
    return 0;
}

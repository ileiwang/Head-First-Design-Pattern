#include <iostream>
#include <string>
using namespace std;
class Beverage
{
public:
    Beverage() {}
    virtual ~Beverage() {}
    string description = "Unknown Beverage";
    virtual string getDescription() = 0;
    virtual double cost() = 0;
};
class CondimentDecorator:public Beverage
{
public:
    CondimentDecorator() {}
    ~CondimentDecorator() {}
    virtual string getDescription() = 0;
};
class DarkRoast:public Beverage
{
public:
    DarkRoast(){
        description = "Dark Roast Coffee";
    }
    double cost(){
        return 0.99;
    }
    string getDescription(){
        return description;
    }
};
class Decaf:public Beverage
{
public:
    Decaf(){
        description = "Decaf Coffee";
    }
    double cost(){
        return 1.05;
    }
    string getDescription(){
        return description;
    }
};
class Espresso:public Beverage
{
public:
    Espresso(){
        description = "Espresso";
    }
    double cost(){
        return 1.99;
    }
    string getDescription(){
        return description;
    }
};
class HouseBlend:public Beverage
{
public:
    HouseBlend(){
        description = "House Blend Coffee";
    }
    double cost(){
        return 0.89;
    }
    string getDescription(){
        return description;
    }
};
class Milk:public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Milk(Beverage *b){
        beverage = b;
    }
    string getDescription(){
        return beverage->getDescription()+", Milk";
    }
    double cost(){
        return 0.10+beverage->cost();
    }
};
class Mocha:public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Mocha(Beverage *b){
        beverage = b;
    }
    string getDescription(){
        return beverage->getDescription()+", Mocha";
    }
    double cost(){
        return 0.20+beverage->cost();
    }
};
class Soy:public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Soy(Beverage *b){
        beverage = b;
    }
    string getDescription(){
        return beverage->getDescription()+", Soy";
    }
    double cost(){
        return 0.15+beverage->cost();
    }
};
class Whip:public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Whip(Beverage *b){
        beverage = b;
    }
    string getDescription(){
        return beverage->getDescription()+", Whip";
    }
    double cost(){
        return 0.10+beverage->cost();
    }
};


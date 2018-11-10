#include <iostream>
using namespace std;
class FlyBehavior
{
public:
    FlyBehavior() {}
    ~FlyBehavior() {}
    virtual void fly() = 0;
};
class QuackBehavior
{
public:
    QuackBehavior() {}
    ~QuackBehavior() {}
    virtual void quack() = 0;
};
class FlyWithWings:public FlyBehavior
{
public:
    FlyWithWings() {}
    ~FlyWithWings() {}
    void fly(){
        cout<<"I'm flying!!"<<endl;
    }
};
class FlyNoWay:public FlyBehavior
{
public:
    FlyNoWay() {}
    ~FlyNoWay() {}
    void fly(){
        cout<<"I can't fly"<<endl;
    }
};
class FlyRocketPowered:public FlyBehavior
{
public:
    FlyRocketPowered() {}
    ~FlyRocketPowered() {}
    void fly(){
        cout<<"I'm flying with a rocket"<<endl;
    }
};
class Quack:public QuackBehavior
{
public:
    Quack() {}
    ~Quack() {}
    void quack(){
        cout<<"Quack"<<endl;
    }
};
class Squeak:public QuackBehavior
{
public:
    Squeak() {}
    ~Squeak() {}
    void quack(){
        cout<<"Squeak"<<endl;
    }
};
class MuteQuack:public QuackBehavior
{
public:
    MuteQuack() {}
    ~MuteQuack() {}
    void quack(){
        cout<<"<< Silence >>"<<endl;
    }
};
class FakeQuack:public QuackBehavior
{
public:
    FakeQuack() {}
    ~FakeQuack() {}
    void quack(){
        cout<<"Qwak"<<endl;
    }
};
class Duck
{
protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
public:
    Duck(){}
    ~Duck()
    {
        delete flyBehavior;
        delete quackBehavior;
    }
    void setFlyBehavior(FlyBehavior *fb){
        flyBehavior = fb;
    }
    void setQuackBehavior(QuackBehavior *qb){
        quackBehavior = qb;
    }
    virtual void display()=0;
    void performFly(){
        flyBehavior->fly();
    }
    void performQuack(){
        quackBehavior->quack();
    }
    void swim(){
        cout<<"All ducks float, even decoys!"<<endl;
    }
};
class MallardDuck:public Duck
{
public:
    MallardDuck():Duck()
    {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quack();
    }
    ~MallardDuck(){}
    void display(){
        cout<<"I'm a real Mallard duck"<<endl;
    }
};
class DecoyDuck:public Duck
{
public:
    DecoyDuck():Duck()
    {
        setFlyBehavior(new FlyNoWay());
        setQuackBehavior(new MuteQuack());
    }
    ~DecoyDuck(){}
    void display(){
        cout<<"I'm a duck Decoy"<<endl;
    }
};
class ModelDuck:public Duck
{
public:
    ModelDuck():Duck()
    {
        flyBehavior = new FlyNoWay();
        quackBehavior = new Quack();
    }
    ~ModelDuck(){}
    void display(){
        cout<<"I'm a model duck"<<endl;
    }
};
class RedHeadDuck:public Duck
{
public:
    RedHeadDuck():Duck()
    {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quack();
    }
    ~RedHeadDuck(){}
    void display(){
        cout<<"I'm a real Red Headed duck"<<endl;
    }
};
class RubberDuck:public Duck
{
public:
    RubberDuck():Duck()
    {
        flyBehavior = new FlyNoWay();
        quackBehavior = new Squeak();
    }
    ~RubberDuck(){}
    void display(){
        cout<<"I'm a rubber duckie"<<endl;
    }
};

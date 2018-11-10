#include <stdio.h>
#include <iostream>
using namespace std;
class Duck
{
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
};
class Turkey
{
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
};
class MallardDuck :public Duck
{
public:
    void quack(){
        cout<<"Quack"<<endl;
    }
    void fly(){
        cout<<"I'm flying"<<endl;
    }
};
class WildTurkey :public Turkey
{
public:
    void gobble(){
        cout<<"Gobble gobble"<<endl;
    }
    void fly(){
        cout<<"I'm flying a short distance"<<endl;
    }
};
class DuckAdapter :public Turkey
{
    Duck* duck;
public:
    DuckAdapter(Duck *d){
        duck = d;
    }
    void gobble(){
        duck->quack();
    }
    void fly(){
        duck->fly();
    }
};
class TurkeyAdapter :public Duck
{
    Turkey *turkey;
public:
    TurkeyAdapter(Turkey *t){
        turkey = t;
    }
    void quack(){
        turkey->gobble();
    }
    void fly()
    {
        for(int i=0; i < 5; i++){
            turkey->fly();
        }
    }
};
int main()
{
    MallardDuck *duck = new MallardDuck();
    WildTurkey *turkey = new WildTurkey();
    Duck *turkeyAdapter = new TurkeyAdapter(turkey);
    cout<<"The Turkey says..."<<endl;
    turkey->gobble();
    turkey->fly();
    cout<<"\nThe Duck says..."<<endl;
    duck->quack();
    duck->fly();
    cout<<"\nThe TurkeyAdapter says..."<<endl;
    turkeyAdapter->quack();
    turkeyAdapter->fly();
    MallardDuck* duck1 = new MallardDuck();
    Turkey* duckAdapter = new DuckAdapter(duck1);
		for(int i=0;i<10;i++) {
			cout<<"The DuckAdapter says..."<<endl;
			duckAdapter->gobble();
			duckAdapter->fly();
		}
    return 0;
}

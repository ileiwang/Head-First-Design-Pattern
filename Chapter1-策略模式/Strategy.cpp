#include <iostream>
#include "Strategy.h"
using namespace std;
int main()
{
    MallardDuck	*mallard = new MallardDuck();
    RubberDuck	*rubberDuckie = new RubberDuck();
    DecoyDuck	*decoy = new DecoyDuck();
    ModelDuck	*model = new ModelDuck();
    mallard->performQuack();
    rubberDuckie->performQuack();
    decoy->performQuack();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();
    // Duck *mallard = new MallardDuck();
    // mallard->performQuack();
    // mallard->performFly();
    // Duck *model = new ModelDuck();
    // model->performFly();
    // model->setFlyBehavior(new FlyRocketPowered());
    // model->performFly();
    return 0;
}

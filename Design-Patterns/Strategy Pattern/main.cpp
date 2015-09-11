#include "Duck.h"
#include "MallardDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

int main()
{
	Duck* mallard = new MallardDuck();

	mallard->performQuack();
	mallard->performFly();
	
	mallard->SetQuackBehavior(new MuteQuack());
	mallard->SetFlyBehavior(new FlyNoWay());

	mallard->performQuack();
	mallard->performFly();

	delete mallard;
	
	return 0;
}
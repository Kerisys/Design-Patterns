
#include "CondimentDecorator.h"
class Mocha :
	public CondimentDecorator
{
	Beverage* beverage;
public:
	Mocha(Beverage* beverage);
	virtual ~Mocha();
	virtual string getDescription() override;
	virtual double cost();
};

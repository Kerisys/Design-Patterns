#pragma once

#include <string>
using std::string;

class Beverage	// 음료
{
protected:
	string description = "음료 이름";
public:
	Beverage();
	virtual ~Beverage();
	virtual string getDescription();
	virtual double cost() = 0;
};


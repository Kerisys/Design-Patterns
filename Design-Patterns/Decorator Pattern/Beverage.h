#pragma once

#include <string>
using std::string;

class Beverage	// ����
{
protected:
	string description = "���� �̸�";
public:
	Beverage();
	virtual ~Beverage();
	virtual string getDescription();
	virtual double cost() = 0;
};


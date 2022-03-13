#pragma once
#define pi 3.14159265359

#include <iostream>

using std::cout;
using std::endl;

class Body {
public:
	virtual ~Body() {}
	virtual void calculateVolume() = 0;
	virtual void calculateArea() = 0;
	virtual void print() = 0;
	double returnVolume() { return _volume; }
	double returnArea() { return _area; }

protected:
	double _area = 0; // ֿכמשאהü עוכא
	double _volume = 0; // ־בתול עוכא
};


#pragma once

#include "Body.h"

class Ball :public Body {
public:
	Ball(double r) : Body() { _r = r; }
	void calculateVolume() override { _volume = 4 * (pi * _r * _r * _r) / 3; }
	void calculateArea() override { _area = 4 * pi * _r * _r; }
	void print() override {
		cout << "Ball's area = " << returnArea() << endl;
		cout << "Ball's volume = " << returnVolume() << endl;
	}

private:
	double _r; // Радиус шара
};


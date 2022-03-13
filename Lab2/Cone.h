#pragma once

#include "Body.h"

class Cone :public Body {
public:
	Cone(double r, double l, double h) : Body() { _r = r; _l = l; _h = h; }
	void calculateVolume() override { _volume = (pi * _r * _r * _h) / 3; }
	void calculateArea() override { _area = pi * _r * (_r + _l); }
	void print() override {
		cout << "Cone's area = " << returnArea() << endl;
		cout << "Cone's volume = " << returnVolume() << endl;
	}

private:
	double _r; // Радиус основания
	double _l; // Образующая
	double _h; // Высота конуса
};


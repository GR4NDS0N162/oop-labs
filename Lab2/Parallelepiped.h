#pragma once

#include "Body.h"

class Parallelepiped :public Body {
public:
	Parallelepiped(double l, double w, double h) : Body() { _l = l; _w = w; _h = h; }
	void calculateVolume() override { _volume = _l * _w * _h; }
	void calculateArea() override { _area = 2 * (_l * _w + _l * _h + _w * _h); }
	void print() override {
		cout << "Parallelepiped's area = " << returnArea() << endl;
		cout << "Parallelepiped's volume = " << returnVolume() << endl;
	}

private:
	double _l; // Длина параллелепипеда
	double _w; // Ширина параллелепипеда
	double _h; // Высота параллелепипеда
};


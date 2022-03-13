//////////////////////////
// Τΰιλ Trapezoid.h

#pragma once

#include "Shape.h"

class Trapezoid :
	public Shape {
public:
	Trapezoid();
	double getArea();
	Point getCOG();
	void rotate(double);
	void move(double, double);
	void info();
};


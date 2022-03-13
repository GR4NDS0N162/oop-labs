//////////////////////////
// Τΰιλ Triangle.h

#pragma once

#include "Shape.h"

class Triangle :
	public Shape {
public:
	Triangle();
	double getArea();
	Point getCOG();
	void rotate(double);
	void move(double, double);
	void info();
};


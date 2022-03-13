//////////////////////////
// Τΰιλ Shape.h

#pragma once

#define PI 3.141592653589793238462643383279502884

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
	double x, y;
};

class Shape {
public:
	virtual ~Shape() {};
	virtual double getArea() = 0;
	virtual Point getCOG() = 0;
	virtual void rotate(double) = 0;
	virtual void move(double, double) = 0;
	virtual void info() = 0;

	vector<Point> getP() { return p; }
	int getN() { return n; }
	double getR() { return r; }

	static Shape* createShape(char cd);

protected:
	vector<Point> p;
	int n;
	double r;
};


//////////////////////////
// Τΰιλ Shape.cpp

#include "Shape.h"
#include "Triangle.h"
#include "Trapezoid.h"

Shape* Shape::createShape(char cd) {
	Shape* sh = 0;
	switch (cd) {
	case '1':
		sh = new Triangle(); break;
	case '2':
		sh = new Trapezoid(); break;
	default: break;
	}
	return sh;
}
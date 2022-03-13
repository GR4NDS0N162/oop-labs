//////////////////////////
// Файл Operations.cpp

#include "Operations.h"

int Operations::compare(Shape* s1, Shape* s2) {
	double d = s1->getArea() - s2->getArea();
	if (d < 0) return -1;
	else if (d == 0) return 0;
	else return 1;
}

bool Operations::isIntersect(Shape* s1, Shape* s2) {
	Point COG1 = s1->getCOG(), COG2 = s2->getCOG();
	double r = sqrt((COG2.x - COG1.x) * (COG2.x - COG1.x) + (COG2.y - COG1.y) * (COG2.y - COG1.y));
	double r1 = s1->getR(), r2 = s2->getR();

	if (r == 0 && r1 == r2)
		return true;
	if (r <= r1 + r2 && r1 + r >= r2 && r2 + r >= r1)
		return true;
	else
		return false;
}

//s1 включается в s2
bool Operations::isInclude(Shape* s1, Shape* s2) {
	Point COG1 = s1->getCOG(), COG2 = s2->getCOG();
	double r = sqrt((COG2.x - COG1.x) * (COG2.x - COG1.x) + (COG2.y - COG1.y) * (COG2.y - COG1.y));
	double r1 = s1->getR(), r2 = s2->getR();

	if (r + r1 <= r2)
		return true;
	else
		return false;
}

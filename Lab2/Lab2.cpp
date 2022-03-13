#include <iostream>
//#include <vld.h>

#include "Body.h"
#include "Parallelepiped.h"
#include "Cone.h"
#include "Ball.h"

using namespace std;

int main() {
	Parallelepiped p(1, 2, 2);
	Cone c(3, 5, 4);
	Ball b(1);

	Body* ptr;

	ptr = &p;
	ptr->calculateArea();
	ptr->calculateVolume();
	ptr->print();

	ptr = &c;
	ptr->calculateArea();
	ptr->calculateVolume();
	ptr->print();

	ptr = &b;
	ptr->calculateArea();
	ptr->calculateVolume();
	ptr->print();

	return 0;
}

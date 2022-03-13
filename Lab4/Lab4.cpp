/////////////////////////////////////////////
// Файл Lab4.cpp

//#include <vld.h>

#include <iostream>
#include <cstdlib>

#include "Interface.h"
#include "Library.h"
#include "Elections.h"

int main() {
	system("chcp 1251 & cls");

	Library lib;
	Elections elec;

	Interface* inter;

	inter = &lib;

	inter->read();
	try {
		inter->find();
	}
	catch (const std::exception& e) {
		cout << e.what() << endl;
		return 1;
	}

	inter = &elec;

	inter->read();
	try {
		inter->find();
	}
	catch (const std::exception& e) {
		cout << e.what() << endl;
		return 1;
	}

	return 0;
}


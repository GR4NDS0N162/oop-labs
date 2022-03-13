//////////////////////////
// Τΰιλ Operations.h

#pragma once

#include "Shape.h"

class Operations {
public:
	static int compare(Shape*, Shape*);
	static bool isIntersect(Shape*, Shape*);
	static bool isInclude(Shape*, Shape*);
};


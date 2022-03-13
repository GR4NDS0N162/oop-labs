/////////////////////////////////////////////
// Файл Elections.h

#pragma once

#include "Interface.h"

#include <string>
#include <map>
#include <vector>

using namespace std;

// Класс «Выборы(Elections)» с полями: ФИО кандидата, дата рождения, место работы, рейтинг предварительных опросов; Вывести сведения о кандидатах, рейтинг которых превышает вводимое число.

struct Сandidate {
	string fullName;
	string birthday;
	string workplace;
};

class Elections :
	public Interface {
public:
	void read();
	void find();

private:
	multimap<int, Сandidate> m;
};


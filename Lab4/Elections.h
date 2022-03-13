/////////////////////////////////////////////
// ���� Elections.h

#pragma once

#include "Interface.h"

#include <string>
#include <map>
#include <vector>

using namespace std;

// ����� �������(Elections)� � ������: ��� ���������, ���� ��������, ����� ������, ������� ��������������� �������; ������� �������� � ����������, ������� ������� ��������� �������� �����.

struct �andidate {
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
	multimap<int, �andidate> m;
};


/////////////////////////////////////////////
// ���� Library.cpp

#include "Library.h"

#include <iostream>
#include <fstream>

#include <algorithm>

using namespace std;

void Library::read() {
	ifstream infile("lib.txt");

	string nStr;
	getline(infile, nStr);

	int n = stoi(nStr);

	for (int i = 0; i < n; i++) {
		string authorFullName;
		string title;
		string yearPublication;
		string copyCount;

		getline(infile, authorFullName);
		getline(infile, title);
		getline(infile, yearPublication);
		getline(infile, copyCount);

		vec.emplace_back(authorFullName, title, stoi(yearPublication), copyCount);
	}

	infile.close();
}

void Library::find() {
	sort(vec.begin(), vec.end(),
		[](const Book& one, const Book& next)->bool {
			if (one.authorFullName < next.authorFullName)
				return true;
			else if (one.authorFullName == next.authorFullName)
				return one.yearPublication < next.yearPublication;
			return false;
		});

	string authorToFind;
	string yearToFind;

	cout << "������� ������ �����: ";
	getline(cin, authorToFind);

	cout << "������� ��� �������: ";
	getline(cin, yearToFind);

	for (auto& c : yearToFind) {
		if (!(c >= '0' && c <= '9'))
			throw exception("�������� ������ ����.");
	}

	cout << endl;

	auto bookIter = lower_bound(vec.begin(), vec.end(),
		Book{ authorToFind, "", stoi(yearToFind), "" },
		[](const Book& one, const Book& next)->bool {
			if (one.authorFullName < next.authorFullName)
				return true;
			else if (one.authorFullName == next.authorFullName)
				return one.yearPublication < next.yearPublication;
			return false;
		});

	for (int i = 1; bookIter->authorFullName == authorToFind; i++, bookIter++) {
		cout << "����� �" << i << endl;
		cout << "��� ������ �����: " << bookIter->authorFullName << endl;
		cout << "��������: " << bookIter->title << endl;
		cout << "��� �������: " << bookIter->yearPublication << endl;
		cout << "���������� �����������: " << bookIter->copyCount << endl;
		cout << endl;
	}
}

/////////////////////////////////////////////
// ���� Elections.cpp

#include "Elections.h"

#include <iostream>
#include <fstream>

#include <algorithm>

using namespace std;

void Elections::read() {
	ifstream infile("elec.txt");

	string nStr;
	getline(infile, nStr);

	int n = stoi(nStr);

	for (int i = 0; i < n; i++) {
		string fullName;
		string birthday;
		string workplace;
		string rating;

		getline(infile, fullName);
		getline(infile, birthday);
		getline(infile, workplace);
		getline(infile, rating);

		m.insert(make_pair(stoi(rating), �andidate{ fullName, birthday, workplace }));
	}

	infile.close();
}

void Elections::find() {
	string minRating;

	cout << "������� �������: ";
	getline(cin, minRating);
	cout << endl;

	for (auto& c : minRating) {
		if (!(c >= '0' && c <= '9'))
			throw exception("�������� ������ �����.");
	}

	auto CandidateIter = m.upper_bound(stoi(minRating));

	for (int i = 1; CandidateIter != m.end(); i++, CandidateIter++) {
		cout << "�������� �" << i << endl;
		cout << "��� ���������: " << CandidateIter->second.fullName << endl;
		cout << "���� ��������: " << CandidateIter->second.birthday << endl;
		cout << "����� ������: " << CandidateIter->second.workplace << endl;
		cout << "������� ��������������� �������: " << CandidateIter->first << endl;
		cout << endl;
	}
}

/////////////////////////////////////////////
// Файл Elections.cpp

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

		m.insert(make_pair(stoi(rating), Сandidate{ fullName, birthday, workplace }));
	}

	infile.close();
}

void Elections::find() {
	string minRating;

	cout << "Введите рейтинг: ";
	getline(cin, minRating);
	cout << endl;

	for (auto& c : minRating) {
		if (!(c >= '0' && c <= '9'))
			throw exception("Неверный формат числа.");
	}

	auto CandidateIter = m.upper_bound(stoi(minRating));

	for (int i = 1; CandidateIter != m.end(); i++, CandidateIter++) {
		cout << "Кандидат №" << i << endl;
		cout << "ФИО кандидата: " << CandidateIter->second.fullName << endl;
		cout << "Дата рождения: " << CandidateIter->second.birthday << endl;
		cout << "Место работы: " << CandidateIter->second.workplace << endl;
		cout << "Рейтинг предварительных опросов: " << CandidateIter->first << endl;
		cout << endl;
	}
}

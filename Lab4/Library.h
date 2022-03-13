/////////////////////////////////////////////
// Файл Library.h

#pragma once

#include "Interface.h"

#include <string>
#include <vector>

using namespace std;

// Класс «Библиотека(Library)» с полями : ФИО автора книги, название, год издания, количество экземпляров данной книги в библиотеке. Вывести сведения о всех книгах заданного автора, начиная с заданного года издания.

class Book {
public:
	string authorFullName;
	string title;
	int yearPublication;
	string copyCount;

	Book(string a, string b, int c, string d) {
		authorFullName = a;
		title = b;
		yearPublication = c;
		copyCount = d;
	}
};

class Library :
	public Interface {
public:
	void read();
	void find();

private:
	vector<Book> vec;
};


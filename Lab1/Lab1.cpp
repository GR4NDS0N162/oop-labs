//#include <vld.h>

#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int n;

	cout << "Введите размер стека: ";
	cin >> n;

	Stack s(n);

	string command = "";

	cout << "Чтобы законить, введите exit" << endl;

	do {
		cin >> command;

		if (command == "push") {
			try {
				int x;
				cin >> x;
				s.push(x);
			}
			catch (const std::exception& ex) {
				cout << ex.what() << endl;
			}
		}
		if (command == "pop") {
			try {
				s.pop();
			}
			catch (const std::exception& ex) {
				cout << ex.what() << endl;
			}
		}
		if (command == "isEmpty") {
			if (s.isEmpty())
				cout << "Стек пуст!" << endl;
			else
				cout << "Стек не пуст!" << endl;
		}
		if (command == "back") {
			try {
				cout << s.back() << endl;
			}
			catch (const std::exception& ex) {
				cout << ex.what() << endl;
			}
		}
	} while (command != "exit");

	return 0;
}

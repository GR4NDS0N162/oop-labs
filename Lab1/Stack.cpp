#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int p) {
	size = p;
	ptr = new Element[p];

	for (int i = 0; i < size; i++)
		ptr[i] = 0;
}

Stack::Stack(const Stack& s) {
	destroy();
	size = s.size;
	currentSize = s.currentSize;
	ptr = new Element[size];
	memcpy(ptr, s.ptr, size);
}

void Stack::push(Element x) {
	if (currentSize >= size)
		throw exception("���� ��� ��������!");

	*(ptr + currentSize++) = x;
}

void Stack::pop() {
	if (isEmpty())
		throw exception("���� � ��� ����!");

	currentSize--;
}

bool Stack::isEmpty() {
	return currentSize == 0;
}

Element Stack::back() {
	if (isEmpty())
		throw exception("���� ����! ����� �������� ��������!");

	return *(ptr + currentSize - 1);
}

Stack& Stack:: operator=(const Stack& s) {
	if (this == &s) //�������������� ���������������
		return*this;
	destroy();
	size = s.size;
	currentSize = s.currentSize;
	ptr = new Element[size];
	memcpy(ptr, s.ptr, size);
	return *this;
}

Stack::~Stack() {
	destroy();
}

#pragma once

typedef int Element;

class Stack {
	//����
	Element* ptr = nullptr;
	int size = 0;//���������� ���������
	int currentSize = 0;//������� ������ �����

public:
	//������������
	Stack(int);//� ���������� ������� �����
	Stack(const Stack&);//�����������

	//������
	void push(Element);//���������� �������� � ����
	void pop();//�������� �������� �� �������� �����
	bool isEmpty();//��������, �������� �� ���� ������
	Element back();//������ �������� �� �������� �����

	//������������� ��������
	Stack& operator=(const Stack&);//������������ � ������������

	//����������
	~Stack();

private:
	void destroy() { if (ptr) delete[] ptr; }
};

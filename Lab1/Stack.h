#pragma once

typedef int Element;

class Stack {
	//Поля
	Element* ptr = nullptr;
	int size = 0;//Количество элементов
	int currentSize = 0;//Текущий размер стека

public:
	//Конструкторы
	Stack(int);//С параметром размера стека
	Stack(const Stack&);//Копирования

	//Методы
	void push(Element);//Добавление элемента в стек
	void pop();//Удаление элемента из верхушки стека
	bool isEmpty();//Проверка, является ли стек пустым
	Element back();//Чтение элемента из верхушки стека

	//Перегруженные операции
	Stack& operator=(const Stack&);//Присваивание с копированием

	//Деструктор
	~Stack();

private:
	void destroy() { if (ptr) delete[] ptr; }
};

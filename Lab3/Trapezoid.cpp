//////////////////////////
// Файл Trapezoid.cpp

#include "Trapezoid.h"

Trapezoid::Trapezoid() {
	n = 4;
	p.resize(n);
	cout << "Введите координаты вершин трапеции в порядке обхода против часовой стрелки." << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "-я вершина:" << endl;
		cin >> p[i].x >> p[i].y;
	}
	Point COG = getCOG();
	r = 0;
	for (int i = 0; i < n; i++) {
		r = max(r, sqrt((COG.x - p[i].x) * (COG.x - p[i].x) + (COG.y - p[i].y) * (COG.y - p[i].y)));
	}
}

double Trapezoid::getArea() {
	double s1 = abs((p[1].x - p[0].x) * (p[2].y - p[0].y) - (p[2].x - p[0].x) * (p[1].y - p[0].y)) / 2;
	double s2 = abs((p[3].x - p[0].x) * (p[2].y - p[0].y) - (p[2].x - p[0].x) * (p[3].y - p[0].y)) / 2;
	return s1 + s2;
}

Point Trapezoid::getCOG() {
	double x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		x += p[i].x;
		y += p[i].y;
	}
	return Point{ x / n, y / n };
}

void Trapezoid::rotate(double a) {
	Point COG = getCOG();
	a = a * PI / 180;
	for (int i = 0; i < n; i++) {
		p[i].x = (p[i].x - COG.x) * cos(a) - (p[i].y - COG.y) * sin(a) + COG.x;
		p[i].y = (p[i].x - COG.x) * sin(a) + (p[i].y - COG.y) * cos(a) + COG.y;
	}
}

void Trapezoid::move(double dx, double dy) {
	for (int i = 0; i < n; i++) {
		p[i].x += dx;
		p[i].y += dy;
	}
}

void Trapezoid::info() {
	cout << "Трапеция" << endl;
}

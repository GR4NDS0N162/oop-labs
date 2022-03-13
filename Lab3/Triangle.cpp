//////////////////////////
// Файл Triangle.cpp

#include "Triangle.h"

Triangle::Triangle() {
	n = 3;
	p.resize(n);
	cout << "Введите координаты вершин треугольника в порядке обхода против часовой стрелки." << endl;
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

double Triangle::getArea() {
	return abs((p[1].x - p[0].x) * (p[2].y - p[0].y) - (p[2].x - p[0].x) * (p[1].y - p[0].y)) / 2;
}

Point Triangle::getCOG() {
	double x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		x += p[i].x;
		y += p[i].y;
	}
	return Point{ x / n, y / n };
}

void Triangle::rotate(double a) {
	Point COG = getCOG();
	a = a * PI / 180;
	for (int i = 0; i < n; i++) {
		p[i].x = (p[i].x - COG.x) * cos(a) - (p[i].y - COG.y) * sin(a) + COG.x;
		p[i].y = (p[i].x - COG.x) * sin(a) + (p[i].y - COG.y) * cos(a) + COG.y;
	}
}

void Triangle::move(double dx, double dy) {
	for (int i = 0; i < n; i++) {
		p[i].x += dx;
		p[i].y += dy;
	}
}

void Triangle::info() {
	cout << "Треугольник" << endl;
}

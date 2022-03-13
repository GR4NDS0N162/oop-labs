//////////////////////////
// Файл Laba3.cpp

//#include <vld.h>

#include "Shape.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Operations.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Shape* p1 = 0;
	Shape* p2 = 0;
	char T;

	do {
		cout << "Тип 1-й фигуры:" << endl;
		cin >> T;
		p1 = Shape::createShape(T);
	} while (p1 == 0);

	do {
		cout << "Тип 2-й фигуры:" << endl;
		cin >> T;
		p2 = Shape::createShape(T);
	} while (p2 == 0);

	//Проверка информации
	{
		cout << "Инфо по 1-й фигуре:" << endl;
		p1->info();
		cout << "Инфо по 2-й фигуре:" << endl;
		p2->info();
	}
	//Проверка площадей
	{
		cout << "Площадь 1-й фигуры = " << p1->getArea() << endl;
		cout << "Площадь 2-й фигуры = " << p2->getArea() << endl;
	}
	//Проверка центров тяжести
	{
		Point COG;

		COG = p1->getCOG();
		cout << "Центр тяжести 1-й фигуры это точка ( " << COG.x << ", " << COG.y << " )" << endl;
		COG = p2->getCOG();
		cout << "Центр тяжести 2-й фигуры это точка ( " << COG.x << ", " << COG.y << " )" << endl;
	}
	//Проверка поворотов
	{
		double a;

		cout << "На какой градус повернуть 1-ю фигуру: " << endl;
		cin >> a;
		cout << "Вершины 1-й фигуры до поворота:" << endl;
		for (int i = 0; i < p1->getN(); i++) {
			cout << "( " << p1->getP()[i].x << ", " << p1->getP()[i].y << " )" << endl;
		}
		p1->rotate(a);
		cout << "Вершины 1-й фигуры после поворота:" << endl;
		for (int i = 0; i < p1->getN(); i++) {
			cout << "( " << p1->getP()[i].x << ", " << p1->getP()[i].y << " )" << endl;
		}

		cout << "На какой градус повернуть 2-ю фигуру: " << endl;
		cin >> a;
		cout << "Вершины 2-й фигуры до поворота:" << endl;
		for (int i = 0; i < p2->getN(); i++) {
			cout << "( " << p2->getP()[i].x << ", " << p2->getP()[i].y << " )" << endl;
		}
		p2->rotate(a);
		cout << "Вершины 2-й фигуры после поворота:" << endl;
		for (int i = 0; i < p2->getN(); i++) {
			cout << "( " << p2->getP()[i].x << ", " << p2->getP()[i].y << " )" << endl;
		}
	}
	//Проверка сдвигов
	{
		double dx, dy;

		cout << "Введите dx и dy на которые сдвинуть 1-ю фигуру: " << endl;
		cin >> dx >> dy;
		cout << "Вершины 1-й фигуры до сдвига:" << endl;
		for (int i = 0; i < p1->getN(); i++) {
			cout << "( " << p1->getP()[i].x << ", " << p1->getP()[i].y << " )" << endl;
		}
		p1->move(dx, dy);
		cout << "Вершины 1-й фигуры после сдвига:" << endl;
		for (int i = 0; i < p1->getN(); i++) {
			cout << "( " << p1->getP()[i].x << ", " << p1->getP()[i].y << " )" << endl;
		}

		cout << "Введите dx и dy на которые сдвинуть 2-ю фигуру: " << endl;
		cin >> dx >> dy;
		cout << "Вершины 2-й фигуры до сдвига:" << endl;
		for (int i = 0; i < p2->getN(); i++) {
			cout << "( " << p2->getP()[i].x << ", " << p2->getP()[i].y << " )" << endl;
		}
		p2->move(dx, dy);
		cout << "Вершины 2-й фигуры после сдвига:" << endl;
		for (int i = 0; i < p2->getN(); i++) {
			cout << "( " << p2->getP()[i].x << ", " << p2->getP()[i].y << " )" << endl;
		}
	}
	//Проверка класса Operations
	{
		cout << "Сравнение фигур 1 и 2 по площади: " << Operations::compare(p1, p2) << endl;
		cout << "Пересекаются ли 1-я и 2-я фигуры? " << Operations::isIntersect(p1, p2) << endl;
		cout << "Включается ли 1-я фигура во 2-ю? " << Operations::isInclude(p1, p2) << endl;
	}

	delete p1, p2;

	return 0;
}

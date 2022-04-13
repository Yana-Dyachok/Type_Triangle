#pragma once
#include <iostream>
class Triangle_type//клас  Triangle_type
{
private:
	int x1, x2, x3, y1, y2, y3;//ініціалізуємо координати  вершин трикутника
	double AB, BC, AC;//ініціалізуємо сторони трикутника
public:
	Triangle_type(void);//конструктор за замовчуванням
	Triangle_type(int, int, int, int, int, int);//конструктор з параметрами
	void Out();//- виводить координати трикутника через пропуск і вкінці виводить перехід на новий рядок;
	void sides_T();//метод знаходить сторони трикутника
	bool equilateral();// -повертає true якщо трикутник рівносторонній в іншому випадку повертає false;
	bool versatile();// -повертає true якщо трикутник різносторонній в іншому випадку повертає false;
	bool isosceles();// -повертає true якщо трикутник рівнобедрений в іншому випадку повертає false;
	bool rectangular();// -повертає true якщо трикутник прямокутний в іншому випадку повертає false;
	bool acute_angled();// -повертає true якщо трикутник гострокутний в іншому випадку повертає false;
	bool obtuse();// -повертає true якщо трикутник тупокутний в іншому випадку повертає false
	~Triangle_type();//деструктор
};
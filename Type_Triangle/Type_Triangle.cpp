/*Написати клас Triangle (трикутник), що містить поля координати вершин трикутника цілого типу x1,y1,x2,y2,x3,y3.
Реалізувати конструктори: по замовчуванню, що обнулює координати вершин трикутника; з параметрами, що отримує координати цілого типу вершин трикутника і ініціалізує їх.
Реалізувати методи які перевіряють тип трикутника:
void Out() - виводить координати трикутника через пропуск і вкінці виводить перехід на новий рядок;
bool equilateral() - повертає true якщо трикутник рівносторонній в іншому випадку повертає false;
bool versatile() - повертає true якщо трикутник різносторонній в іншому випадку повертає false;
bool isosceles() - повертає true якщо трикутник рівнобедрений в іншому випадку повертає false;
bool rectangular() - повертає true якщо трикутник прямокутний в іншому випадку повертає false;
bool acute_angled() - повертає true якщо трикутник гострокутний в іншому випадку повертає false;
bool obtuse() - повертає true якщо трикутник тупокутний в іншому випадку повертає false.*/
#include <iostream>
#include "Triangle.h"
using namespace std;
int main()
{	Triangle_type Triangle(-1,2,2,0,5,-2);//об'єкт класу Triangle_type з параметрами
        Triangle.sides_T();//обчислює квадрати сторін трикутника для знаходження типу трикутника
	cout << "Triangle's coordinates: ";Triangle.Out(); cout << endl;//  виводить координати трикутника через пропуск і вкінці виводить перехід на новий рядок
	cout << "Equilateral triangle:" << Triangle.equilateral()<<endl;// повертає true якщо трикутник рівносторонній в іншому випадку повертає false
	cout << "Versatile triangle:  " << Triangle.versatile() << endl;//повертає true якщо трикутник різносторонній в іншому випадку повертає false
	cout << "Isosceles triangle:  " << Triangle.isosceles() << endl;//повертає true якщо трикутник рівнобедрений в іншому випадку повертає false
	cout << "Rectangular triangle:" << Triangle.rectangular() << endl;//повертає true якщо трикутник прямокутний в іншому випадку повертає false
	cout << "Acute triangle:      " << Triangle.acute_angled() << endl;//повертає true якщо трикутник гострокутний в іншому випадку повертає false
	cout << "Obtuse triangle:     " << Triangle.obtuse() << endl;//повертає true якщо трикутник тупокутний в іншому випадку повертає false
}

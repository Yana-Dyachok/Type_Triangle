#include "Triangle.h"
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
Triangle_type::Triangle_type() {//конструктор за замовчуванням
	x1 = 0;  x2 = 0; x3 = 0; y1 = 0; y2 = 0; y3 = 0;//обнулюємо координати
}


Triangle_type::Triangle_type(int x1, int x2, int x3, int y1, int y2, int y3) {//конструктор з параметрами
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
}


void Triangle_type::Out() {//метод виводить координати трикутника
	std::cout << this->x1<<'\t' << this->x2 << '\t' << this->x3 << '\t' << this->y1 << '\t' << this->y2 << '\t' << this->y3 <<std::endl;
}


void Triangle_type::sides_T() {//метод знаходить сторони трикутника
	AB = (pow((x2 - x1),2) + pow((y2 - y1),2));
	BC = (pow((x3 - x2),2) + pow((y3 - y2),2));
	AC = (pow((x3 - x1),2) + pow((y3 - y1),2));
}


bool Triangle_type::equilateral(){
	return ((AB == BC) and (BC == AC));
}


bool Triangle_type::versatile() {
	return((AB != BC) and (AB != AC) and (BC != AC));
}


bool Triangle_type::isosceles() {
	return(((AB == BC) and (AB != AC)) or ((AB == AC) and (BC != AC)) or ((BC == AC) and (AB != BC)));
}


bool Triangle_type::rectangular() {
	return((AB + BC== AC) or (AC + BC ==AB) or (AB + AC ==BC));
}


bool Triangle_type::acute_angled() {
	return(((AB + BC) >AC) or ((AC +BC) > AB) or ((AB + AC) >BC));
}


bool Triangle_type::obtuse() {
	return(((AB + BC) < AC) or ((AC + BC) < AB) or ((AB + AC) < BC));
}


Triangle_type::~Triangle_type(){}
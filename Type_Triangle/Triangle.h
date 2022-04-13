#pragma once
#include <iostream>
class Triangle_type//����  Triangle_type
{
private:
	int x1, x2, x3, y1, y2, y3;//���������� ����������  ������ ����������
	double AB, BC, AC;//���������� ������� ����������
public:
	Triangle_type(void);//����������� �� �������������
	Triangle_type(int, int, int, int, int, int);//����������� � �����������
	void Out();//- �������� ���������� ���������� ����� ������� � ����� �������� ������� �� ����� �����;
	void sides_T();//����� ��������� ������� ����������
	bool equilateral();// -������� true ���� ��������� ������������ � ������ ������� ������� false;
	bool versatile();// -������� true ���� ��������� ������������ � ������ ������� ������� false;
	bool isosceles();// -������� true ���� ��������� ������������ � ������ ������� ������� false;
	bool rectangular();// -������� true ���� ��������� ����������� � ������ ������� ������� false;
	bool acute_angled();// -������� true ���� ��������� ������������ � ������ ������� ������� false;
	bool obtuse();// -������� true ���� ��������� ���������� � ������ ������� ������� false
	~Triangle_type();//����������
};
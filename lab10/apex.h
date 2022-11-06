#pragma once
#include "Triangle.h"
#include <iostream>
using namespace std;

class Apex : public Triangle {
public:

	Apex() {	//	����������� �� �����������
		
		ax = 0;
		ay = 0;
		bx = 0;
		by = 0;
		cx = 0;
		cy = 0;
	}

	void Read() {
		cout << "������ ���������� ���������� (x, y)" << endl;
		cout << "Ax = ";
		cin >> ax;
		cout << "Ay = ";
		cin >> ay;
		cout << "Bx = ";
		cin >> bx;
		cout << "By = ";
		cin >> by;
		cout << "Cx = ";
		cin >> cx;
		cout << "Cy = ";
		cin >> cy;
	}

	void Computation() {
		AB = sqrt(pow((bx - ax), 2) - pow((by - ay), 2));
		BC = sqrt(pow((cx - bx), 2) - pow((cy - by), 2));
		AC = sqrt(pow((cx - ax), 2) - pow((cy - ay), 2));
		cout << endl;

		if (AB <= 0)
			cout << "AB = " << AB << endl;
		else if (BC <= 0)
			cout << "BC = " << BC << endl;
		else if (AC <= 0)
			cout << "AC = " << AC << endl;
		else if (AB > BC + AC || AC > AB + BC || BC > AB + AC)
			cout << "�������. ������ ���������� �� ����." << endl;
		else {
			cout << "AB = " << AB << " ��" << endl;
			cout << "BC = " << BC << " ��" << endl;
			cout << "AC = " << AC << " ��" << endl;

			if (AB == BC)
				cout << "��������� ������������, �� AB = BC\t" << AB << " = " << BC << endl;
			else if (AB == AC)
				cout << "��������� ������������, �� AB = AC\t" << AB << " = " << AC << endl;
			else if (AC == BC)
				cout << "��������� ������������, �� AC = BC\t" << AC << " = " << BC << endl;
			else if (AC == BC && BC == AB)
				cout << "��������� ������������" << endl;
			else
				cout << "�������. ������ ���������� �� ����." << endl;

			cout << "������� ���" << "KL = " << AB / 2 << " ��" << endl;
			cout << "������ " << "AM = " << sqrt(pow(AB, 2) / 2 + pow(AC, 2) / 2 - pow(BC, 2) / 4) << " ��" << endl;
		}
	}
};
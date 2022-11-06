#pragma once
#include "Triangle.h"
#include <iostream>
using namespace std;

class Sides : public Triangle {
public:

	Sides() {	
		AB = 0;
		BC = 0;
		AC = 0;
	}

	void Read() {
		cout << "������� ����������:" << endl;
		cout << "AB = ";
		cin >> AB;
		cout << "BC = ";
		cin >> BC;
		cout << "AC = ";
		cin >> AC;
		cout << endl;
	}

	void Computation() {
		if (AB < BC + AC && BC < AC + AB && AC < AB + BC) {
			if (AB == BC)
				cout << "��������� �������������, �� AB = BC\t" << AB << " = " << BC << endl;
			else if (AB == AC)
				cout << "��������� ������������, �� AB = AC\t" << AB << " = " << AC << endl;
			else if (AC == BC)
				cout << "��������� ������������, �� AC = BC\t" << AC << " = " << BC << endl;
			else if (AB == BC && BC == AC)
				cout << "��������� ������������" << endl;
			else
				cout << "³����� ���������" << endl;

			cout << "������� ���" << "KL = " << AB / 2 << "��" << endl;
			cout << "������" << "AM = " << sqrt(pow(AB, 2) / 2 + pow(AC, 2) / 2 - pow(BC, 2) / 4) << " ��" << endl;
		}
		else
			cout << "�������. ������ ���������� �� ����." << endl;
	}
};
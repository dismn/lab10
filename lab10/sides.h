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
		cout << "Сторони трикутників:" << endl;
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
				cout << "Трикутник рывнобедрений, бо AB = BC\t" << AB << " = " << BC << endl;
			else if (AB == AC)
				cout << "Трикутник рівнобедрений, бо AB = AC\t" << AB << " = " << AC << endl;
			else if (AC == BC)
				cout << "Трикутник рівнобедрений, бо AC = BC\t" << AC << " = " << BC << endl;
			else if (AB == BC && BC == AC)
				cout << "Трикутник рівносторонній" << endl;
			else
				cout << "Вільний трикутник" << endl;

			cout << "Середня лінія" << "KL = " << AB / 2 << "см" << endl;
			cout << "Медіана" << "AM = " << sqrt(pow(AB, 2) / 2 + pow(AC, 2) / 2 - pow(BC, 2) / 4) << " см" << endl;
		}
		else
			cout << "Помилка. Такого трикутника не існує." << endl;
	}
};
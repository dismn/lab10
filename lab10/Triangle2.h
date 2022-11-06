#pragma once
#include "Triangle.h"
using namespace std;

class Triangle2 : public Triangle {	
	float R, r;	

public:

	Triangle2() {	
		AB = 0;
		BC = 0;
		AC = 0;
		R = 0;
		r = 0;
	}

	void Read() {
		cout << "Введіть сторони трикутника" << endl;
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
			if (AB == sqrt(pow(AC, 2) + pow(BC, 2))) {
				cout << "Гіпотенуза" << AB << "см." << endl;
				R = AB / 2;
				r = (BC + AC - AB) / 2;
				cout << "Радіус описаного кола R = " << R << " см" << endl;
				cout << "Радіус вписаного кола r = " << r << " см" << endl;
			}
			else if (AC == sqrt(pow(AB, 2) + pow(BC, 2))) {
				cout << "Гіпотенуза " << AC << " см." << endl;
				R = AC / 2;
				r = (AB + BC - AC) / 2;
				cout << "Радіус описаного кола R = " << R << " см" << endl;
				cout << "Радіус вписаного кола r = " << r << " см" << endl;
			}
			else if (BC == sqrt(pow(AC, 2) + pow(AB, 2))) {
				cout << "Гіпотенуза " << BC << " см." << endl;
				R = BC / 2;
				r = (AB + AC - BC) / 2;
				cout << "Радіус описаного кола R = " << R << " см" << endl;
				cout << "Радіус вписаного кола r = " << r << " см" << endl;
			}
			else
				cout << "Трикутник не прямокутний" << endl;
		}
		else
			cout << "Помилка. Такого трикутника не існує" << endl;
	}
}; 

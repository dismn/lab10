#pragma once
using namespace std;

class Triangle {
protected:
	unsigned int AB, BC, AC;	
	int ax, ay, bx, by, cx, cy;	

public:

	Triangle() {	
		AB = 0;
		BC = 0;
		AC = 0;

		ax = 0;
		ay = 0;
		bx = 0;
		by = 0;
		cx = 0;
		cy = 0;
	}

	virtual void Read() = 0;

	virtual void Computation() = 0;	
}; 

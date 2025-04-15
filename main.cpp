#include<iostream>

#include "CRectangle.h"

int main() {

	float area;
	float a0,a1,a2,a3;
	
	Quadrilateral* A; //polimorfismo, anche se quadrilateral e rectangle sono due cose diverse
	
	Rectangle r1;
	Rectangle r2(1,7);
	
	A= &r1;
	
	A->Dump(); //viene chiamata la dump del quadrilatero 
	r1.Dump(); //dump dello oggetto rettangolo
	
	area=r1.GetArea();
	cout << "rettangolo 1 - area: " << area << endl;
	
	r1=r2;
	
	area=r1.GetArea();
	cout << "rettangolo 1 - area: " << area << endl;
	
	A->Dump();
//	A->SetWidth(11,4);
	r1.GetAngles(a0,a1,a2,a3);

	return 0;
	
}	
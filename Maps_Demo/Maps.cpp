// Maps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Hotel.h"
#include"PointGeo.h"
#include"Motel.h"
int main()
{
	Hotel H1("hoteee", 5.6, 4);
	PointGeo P1(2.5, 1.4);

	P1.operator=(H1);
	PointGeo P2(H1);
	Hotel H2(H1);

	H2.afficher();




	/*PointGeo P1(1.2, 5.6);
	Hotel H1;
	Motel M1;
	P1.afficher();
	//H1.afficher();
	//M1.afficher();
	P1 = M1;
	P1.afficher();
	/*PointGeo* P1 = new Hotel(2.5,4.6);
	Hotel h1;
	P1->afficher();
	h1.afficher();
	P1 = h1;
	P1->afficher();*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

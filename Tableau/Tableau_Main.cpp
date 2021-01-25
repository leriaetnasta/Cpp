// Tableau_Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Tableau.h"
#include"TableauBorne.h"
using namespace std;
int main()
{
    TableauBorne T(0,5,6);
    T.Tableau::get_taille();
    T(0, 0);
    T(1, 1);
    T(2, 2);
    T(3, 3);
    T(4, 4);
    cout << T[0];
    cout << T[1];
    cout << T[2];
    cout << T[3];
    cout << T[4];
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

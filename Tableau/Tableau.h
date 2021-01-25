#pragma once


#include <iostream>
#include<assert.h>
using namespace std;
class Tableau
{
protected:
	int taille;
	float* tab;
public:
	Tableau(int taille);
	Tableau(const Tableau& T);
	Tableau& operator=(const Tableau& T);
	~Tableau();
	float& operator[](int);
	void get_taille();

};


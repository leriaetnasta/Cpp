#pragma once
#include <iostream>
using namespace std;
class Matrice
{
public:
	Matrice();
	Matrice(int, int);
	~Matrice();
	Matrice(const Matrice& M);
	void saisie();
	void afficher()const;

	Matrice& operator+(const Matrice& M)const;
	Matrice& operator*(const Matrice& M)const;
	Matrice& operator=(const Matrice& M);
private:
	int li, cl;
	float** mat;

};


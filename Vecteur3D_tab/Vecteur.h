#pragma once
#include <iostream>
using namespace std;

class Vecteur
{
private:
	double x;
	double y;
	double z;
public:
	Vecteur();
	Vecteur(double,double,double);
	void affichage()const;
	Vecteur somme(const Vecteur&)const;
	double produit(const Vecteur&)const;
	bool operator==(const Vecteur&)const;

	
};


#pragma once
#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
class Employe
{
	static int cpt;
	string nom;
	int matricule;
	int indice;
	static int valeur;
public:
	Employe() :nom(" "), matricule(cpt++), indice(0) {};
	Employe(string, int);
	virtual void afficher()const;
	virtual int salaire()const;
};


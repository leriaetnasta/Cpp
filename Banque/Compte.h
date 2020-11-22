#pragma once
#include <string>
using namespace std;
class Compte
{
private:
	int numCompte;
	string nomProprietaire;
	double solde;
public:
	Compte(int, string, double);
	bool retirerArgent(int);
	void deposerArgent(double);
	double consulterSolde()const;
	bool transfrerArgent(Compte&,int);


};


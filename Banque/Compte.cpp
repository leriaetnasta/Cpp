#include "Compte.h"
#include<string>
using namespace std;
Compte::Compte(int numCompte, string nomProprietaire, double solde)
{
	
	this->nomProprietaire=nomProprietaire;
	this->numCompte = numCompte;
	this->solde = solde; 
}

bool Compte::retirerArgent(int valeuraRetirer)
{
	if (this->solde >= valeuraRetirer) {
		this->solde -= valeuraRetirer;
		return true;
	}else{
		return false;}
	
}

void Compte::deposerArgent(double somme)
{
	this->solde += somme;
}

double Compte::consulterSolde() const
{
	return this->solde;
}

bool  Compte::transfrerArgent(Compte& compte, int somme)
{
	if (this->solde >= somme) {
		this->solde -= somme;
		compte.solde += somme;
		return true;
	}
	else { return false; }
}

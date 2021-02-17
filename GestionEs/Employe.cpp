#include "Employe.h"
int Employe::cpt = 0;
int Employe::valeur=20;
Employe::Employe(string n, int i)
{
	nom = n;
	matricule= cpt++;
	indice = i;

}

void Employe::afficher() const
{
	cout << "nom : " << nom << endl;
	cout << "natricule : " << matricule << endl;
	cout << "indice : " << indice << endl;
}

int Employe::salaire() const
{
	return indice*Employe::valeur;
}

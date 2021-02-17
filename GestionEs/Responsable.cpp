#include "Responsable.h"

Responsable::Responsable(string t, string n, int i, Employe** emp) : Employe(n,i)
{
	titre = t;
	this->emp = emp;
}

void Responsable::afficher() const
{
	cout << "le titre :" << titre << endl;
	for (int i = 0; i < 1; i++) {
		this->emp[i]->afficher();
	}
}

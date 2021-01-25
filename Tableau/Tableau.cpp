#include "Tableau.h"

Tableau::Tableau(int taille)
{
	this->taille = taille;
	this->tab = new float[taille];
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->tab = new float[taille];
	for (int i = 0;i < taille;i++) {
		this->tab[i] = T.tab[i];
	}
}

Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		this->taille = T.taille;
		this->tab = new float[taille];
		for (int i = 0;i < taille;i++) {
			this->tab[i] = T.tab[i];
		}
	}
	else {
		return *this;
	}
}

Tableau::~Tableau()
{
	delete[] tab;
	tab = 0;
}

float& Tableau::operator[](int i)
{
	assert(i < taille);
	return this->tab[i];
}

void Tableau::get_taille()
{
	cout << taille;
}

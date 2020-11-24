#include "Vecteur.h"

Vecteur::Vecteur()
{
	this->x = 0.0;
	this->y = 0.0;
	this->z = 0.0;
}

Vecteur::Vecteur(double x,double y,double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vecteur::affichage() const
{
	cout <<"(" << this->x << "," << this->y << "," << this->z << ")";
}

Vecteur Vecteur::somme(const Vecteur& autre)const
{
	Vecteur somme;
	somme.x = this->x + autre.x;
	somme.y = this->y + autre.y;
	somme.z = this->z + autre.z;
	return somme;
}

double Vecteur::produit(const Vecteur& autre) const
{
	return this->x*autre.x+this->y*autre.y+this->z*autre.z;
}

bool Vecteur::operator==(const Vecteur& autre) const
{
	if (this->x == autre.x && this->y == autre.y && this->z == autre.z) {
		return true;
	}
	else {return false;}
	
}

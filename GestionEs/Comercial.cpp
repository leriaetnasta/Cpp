#include "Comercial.h"

comercial::comercial(string n, int i, int v):Employe(n,i)
{
	ventes = v;
}

void comercial::reset_vente(int v)
{
	ventes = v;
}

int comercial::salaire() const
{
	return this->Employe::salaire() + (this->ventes / 20);
}

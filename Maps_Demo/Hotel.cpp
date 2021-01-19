#include "Hotel.h"

Hotel::Hotel(string nom, double x, double y):PointGeo(x,y)
{
	this->nom = nom;
	cout << "constructeur de la casse Hotel" << endl;
}

Hotel::~Hotel()
{
	cout << "destructeur de la classe Hotel" << endl;
}

Hotel::Hotel(const Hotel& h):PointGeo(h)
{
	nom = h.nom;
	cout << "constructeur de recopie de la classe Hotel" << endl;
}

Hotel& Hotel::operator=(const Hotel& h)
{
	if (this != &h) {
		this->PointGeo::operator=(h);
		this->nom = h.nom;
	}
	return *this;
}

/*void Hotel::afficher() const
{
	this->PointGeo::afficher();
	cout << this->nom << endl;

}*/

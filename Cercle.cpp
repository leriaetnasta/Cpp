#include "Cercle.h"

Cercle::Cercle()
{
	this->centre = Point();
	this->rayon = 0.0;
}

Cercle::Cercle(double rayon, Point& centre)
{
	this->rayon = rayon;
	this->centre = centre;
}

string Cercle::affichage() const
{
	string s;
	s = "(" + this->centre.affichage() + to_string(this->rayon) + ")";
	return s;
}

Cercle& Cercle::transformer(double x, double y)
{
	this->centre.translate(x, y);
	return *this;
}

double Cercle::surface() const
{
	return pow(this->rayon,2)*3.14;
}

double Cercle::perimetre() const
{
	return this->rayon*2*3.14;
}

void Cercle::set_rayon(double rayon)
{
	this->rayon = rayon;
}

double Cercle::get_rayon() const
{
	return this->rayon;
}

bool Cercle::operator==(Cercle& autre) const
{
	if(this->rayon==autre.rayon && this->centre.operator==(autre.centre)){
		return true;}
	else {return false;}
	
}

bool Cercle::appartenance(const Point& point) const
{
	if(this->centre.distance(point)<this->rayon)
	{
		return true;
	}
	else {
       return false;
	}
}

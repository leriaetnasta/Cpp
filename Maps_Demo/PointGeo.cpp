#include "PointGeo.h"
using namespace std;
#include<iostream>
double PointGeo::distance(const PointGeo&p) const
{
	return this->x-p.x+this->y-p.y;
}

PointGeo::PointGeo()
{
	this->x = 0;
	this->y = 0;
}

PointGeo::~PointGeo()
{
	cout << "destructeur de la classe PointGeo" << endl;
}

PointGeo::PointGeo(double x, double y)
{
	this->x = x;
	this->y = y;
	cout << "constructeur de la classe PointGeo" << endl;
}

void PointGeo::afficher() const
{
	cout <<"x= "<< this->x <<endl;
	cout <<"y= "<< this->y <<endl;
}

PointGeo::PointGeo(const PointGeo& p):x(p.x),y(p.y)
{
	cout << "constructeur de recopie de la classe PointGeo" << endl;
}

PointGeo& PointGeo::operator=(const PointGeo& p)
{
	if (this!=&p) {
		this->x = p.x;
		this->y = p.y;
	}
	return *this;
	cout << "operator= de la classe PointGeo" << endl;
}

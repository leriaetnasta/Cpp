#pragma once
#include"Point.h"
class Cercle
{
private: 
	double rayon;
	Point centre;
public: 
	Cercle();
	Cercle(double rayon, Point& centre);
	string affichage()const;
	Cercle& transformer(double, double);
	double surface()const;
	double perimetre()const;
	void set_rayon(double);
	double get_rayon()const;
	bool operator==(Cercle&)const;
	bool appartenance(const Point& point)const;

};


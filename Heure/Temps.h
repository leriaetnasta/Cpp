#pragma once
#include <iostream>
using namespace std;
class Temps
{
private: 
	int heure; 
	int minute;
	int seconde;
public:
	Temps(int heure, int minute, int seconde);
	void affichage_anglaise()const;
	void affichage_française()const;
	bool inferieur(const Temps&)const;
};


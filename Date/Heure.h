#pragma once
#include<iostream>
#include <string>
using namespace std;
class Heure
{
protected:
	int h, m, s;
public:
	Heure(int h=0, int m=0, int s=0);
	void afficher()const;
	bool operator>(const Heure& h)const;
	int convert()const;
	int comparer(const Heure& h)const;

};


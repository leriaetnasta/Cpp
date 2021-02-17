#pragma once
#include <iostream>
#include"Employe.h"
#include"Responsable.h"
#include"Comercial.h"
using namespace std;
class Personnel
{
public:
	Personnel(int t);
	void ajouter_employe();
private:
	Employe** e;
	int taille;
};


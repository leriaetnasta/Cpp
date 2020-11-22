#include "Pile.h"
#include <iostream>
using namespace std;
Pile::Pile(int sommet)
{
      this->sommet = -1;
}

void Pile::empiler(int sommet)
{
	if (this->sommet -1 < max_tab) {
		this->pile[++this->sommet] = sommet;
		cout <<sommet << "a été empilé";
	}
	else {
		cout << "la pile est pleine";
	}
}

int Pile::depiler()
{
	if (this->sommet >= 0) {

		return this->pile[this->sommet--];
	}
	else {
		cout << "la pile est vide";
		return 0;
	}
	
}

bool Pile::pileVide()
{
	if (this->sommet == -1) {
        return true;
	}
	else {
		return false;
	}
	
}

void Pile::afficherPile()
{
	for (int i = 0;i < sommet;i++) {
		cout << this->pile[i];
	}
}

int Pile::Sommet()
{
	return this->pile[this->sommet];
}

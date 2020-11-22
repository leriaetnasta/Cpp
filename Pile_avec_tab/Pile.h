#pragma once
#define max_tab 50

class Pile
{
private:
	int sommet;
	int pile[max_tab];
public:
	Pile(int);
	void empiler(int);
	int depiler();
	bool pileVide();
	void afficherPile();
	int Sommet();

};


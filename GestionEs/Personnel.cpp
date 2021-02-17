#include "Personnel.h"

Personnel::Personnel(int t):taille(t)
{
	e = new Employe*[t];
}

void Personnel::ajouter_employe()
{
	string nom;
	int i;
	char fct;
	cout << taille;
	for (int i = 0; i < taille; i++) {

	cout << "entrer le nom "<<endl;
	cin >> nom; 
	cout << "entrer l'indice ";
	cin >> i;
	e[i] = new Employe(nom, i);
	e[i]->afficher();
	
	}
	
	 
}

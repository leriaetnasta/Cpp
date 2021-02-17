#include"Employe.h"
class comercial : public Employe 
{
private:
	int ventes;
public:
	comercial(string n, int i, int v);
	void reset_vente(int);
	int salaire()const override;

};
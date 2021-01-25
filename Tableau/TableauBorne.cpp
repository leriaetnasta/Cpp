#include "TableauBorne.h"

TableauBorne::TableauBorne(float i, float s, int t):Tableau(t)
{
	if (i > s) {
		sup = i;
		inf = s;
	}
	else {
		sup = s;
		inf = i;
	}
}

const float& TableauBorne::operator[](int i)
{
	return this->Tableau::operator[](i);
}

void TableauBorne::operator()(int i, float f)
{
	assert(i < taille);
	if (f <= sup && f >= inf) {
		this->Tableau::tab[i] = f;
	}
	else {
		cout << "indice incorrect";
	}
	
}

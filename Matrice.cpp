#include "pch.h"
#include "Matrice.h"


Matrice::Matrice(int l, int c)
{
	this->li = l;
	this->cl = c;
	this->mat = new float* [this->li];
	for (int i = 0;i <this->li;i++) {
		this->mat[i] = new float[this->cl];
	}
	for (int i = 0;i < this->li;i++) {
		for (int j = 0;j < this->cl;j++) {
			this->mat[i][j] = 0;
		}
	}
}

Matrice::~Matrice() {
	for (int i = 0;i < this->li;i++) {
		delete [] this->mat[i];
		this-> mat[i] = 0;
	}
	delete [] this->mat;
	this->mat = 0;
}

Matrice::Matrice(const Matrice& M)
{
	this->li;
	this->cl;
	this->mat = new float* [this->li];
	for (int i = 0; i < this->li;i++) {
			this->mat[i] = new float[this->cl];
		for (int i = 0; i < this->cl; i++)
		{
			this->mat[i][j] = M.mat[i][j];

		}
	}
}

void Matrice::saisie()
{
	for (int i = 0;i < this->li;i++) {
		for (int j = 0;j < this->cl;j++) {
			cout << "mat[" << i << "][" << j << "]=" << endl;
			cin >> this->mat[i][j];

		}
	}
}

void Matrice::afficher() const
{
	for (int i = 0;i < this->li;i++) {
		for (int j = 0; j < this->cl;j++) {
			cout << this->mat[i][j] << " ";
		}
		cout << endl;
	}
}

Matrice& Matrice::operator+(const Matrice& M) const
{
	assert(this->li==M.li && this->cl==M.cl)
	Matrice* som = new Matrice(this->li;this->cl);
	for (int i = 0;i < this->li;i++) {
		for (int j = 0;j < this->cl;j++) {
			som->mat[i][j]=this->mat[i][j] + M.mat[i][j];
		}
	}
	return *som;
}

Matrice& Matrice::operator*(const Matrice& M) const
{
	assert(this->li == M.cl && this->cl == M.li);
	Matrice* prod = new Matrice(this->li, M.cl);
	for (int i = 0;i < this->li;i++) {
		for (int j = 0;j < this->cl;j++) {
			for (int k = 0;k < this->cl;k++) {
				prod->mat[i][j] += this->mat[i][k] * M.mat[k][j];
			}
		}
	}
}

Matrice& Matrice::operator=(const Matrice& M)
{
	if (this != &M) {
		this->li = M.li;
		this->cl = M.cl;
		this->mat = new float* [this->li];
		for (int i = 0;i < this->li;i++) {
			this->mat[i] = new float[this->cl];
			for (int j = 0;j < this->cl;j++) {
				this->mat[i][j] = M.mat[i][j];
			}
		}
		return *this;
	}
	else {
		return *this;
	}
}


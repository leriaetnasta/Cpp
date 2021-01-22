#include "DateH.h"

DateH::DateH(int j, int mois, int a, int h, int m, int s):Heure(h,m,s)
{
	this->a = (a >= 1582 && a <= 2021) ? a : 1582;
	this->mois = (mois > 1 && mois <= 12) ? mois : 1;
	this->j = (j >= 0 && j <= this->maxjourmois()) ? j : 1;

}

bool DateH::Bxtil() const
{
	if (a % 4 == 0) {
		return true;
	}
	return false;
}

int DateH::maxjourmois() const
{
	int max;
	if (mois == 2) {
		if (this->Bxtil()) {
			max = 29;
		}
		else {
			max = 28;
		}
	}
	else if (mois <= 7 && mois % 2 == 0 || mois > 7 && mois % 2 != 0) {
		max = 30;
	}
	else {
		max = 31;
	}
	return max;
}

int DateH::comparer(const Heure& H) const
{
	if (this->convert() - H.convert() < 0) {
		return -1;
	}
	else if (this->convert() - H.convert() > 0) {
		return 1;
	}
	else {
		return this->Heure::comparer(H);
	}
}

void DateH::afficher() const
{
	if (j < 10) {
		cout << "0" << j << "/";
	}
	else {
		cout << j << "/";
	}
	if (mois < 10) {
		cout << "0" << mois << "/" << a << endl;
	}
	else {
		cout << mois << "/" << a << endl;
	}
	Heure::afficher();
}

bool DateH::operator>(const DateH& d) const
{
	if (this->comparer() == 1) {
		return true;
	}
	return false;
}

int DateH::convert() const
{
	int today;
	if (this->Bxtil()) {
		today += this->a * 366;
	}
	else {
		today += this->a * 365;
	}
	today += this->mois * this->maxjourmois() + this->j;
	return today;
}


#include "Heure.h"

/*Heure::Heure(int h=0, int m=0, int s=0)
{
	if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59) {
		this->h = h;
		this->m = m;
		this->s = s;
	}
	else {
		cout << "format incorrect" << endl;
	}
	
}

void Heure::affiche() const
{
	if (h < 10) {
		cout << "0" << h << ":";
	}
	else {
		cout << h << ":";
	}
	if (m < 10) {
		cout << "0" << m<<":";
	}
	else {
		cout << s<<":";
	}
	if (s < 10) {
		cout << "0" << s << endl;
	}
	else {
		cout << s << endl;
	}
}

bool Heure::operator>(const Heure& h) const
{
	if (this->convert() - h.convert()<=0) {
		return false;
	} return true;
	/*if (this != &h) {
		if (this->h > h.h) {
			return true;
		}
		else if(this->h==h.h)
			if (this->m > h.m) {
				return true;
			}
			else if (this->s > h.s) {
				return true;
			}
	}
	return false;*/
//}

/*bool Heure::operator==(const Heure& h) const
{
	if (this->h == h.h && this->m == h.m && this->s == h.s) {
		return true;
	}
	return false;
}

int Heure::convert() const
{
	int s;
	s = (this->h * 3600) + (this->m * 60) + this->s;
	return s;
}*/

Heure::Heure(int h, int m, int s)
{
	this->h = (h >= 0 && h <= 23) ? h : 0;
	this->m = (m >= 0 && m <= 59) ? m : 0;
	this->s = (s >= 0 && s < 59) ? s : 0;
}

void Heure::afficher() const
{
	string s;
	s = (h < 10) ? ("0" + to_string(this->h) + ":") : (to_string(this->h) + ":");
	s += (m < 10) ? ("0" + to_string(this->m) + ":") : (to_string(this->m) + ":");
	s += (this->s < 10) ? ("0" + to_string(this->s)) : (to_string(this->s));

	cout << s << endl;
}

bool Heure::operator>(const Heure& h) const
{
	if (this->comparer(h) == 1) {
		return true;
	}
	return false;
}

int Heure::convert() const
{
	return (this->h * 3600 + this->m * 60 + this->s * 60);
}

int Heure::comparer(const Heure& h) const
{
	int r;
	if (this->convert() - h.convert() < 0) {
		r = -1;
	}
	else if (this->convert() - h.convert() > 0) {
		r = 1;
	}
	else { r = 0; }
	return r;
}

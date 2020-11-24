#include "Temps.h"
using namespace std;
Temps::Temps(int heure, int minute, int seconde)
{
	this->heure = heure;
	this->minute = minute;
	this->seconde = seconde;
}

void Temps::affichage_anglaise() const
{
	if (this->heure > 12){
		if( this ->heure==12 && this->minute <= 59 && this->seconde <= 59)
			cout << this->heure << " : " << this->minute << " : " << this->seconde << " am";
		if (this->heure-12 == 0) {
			cout << "00 : " << this->minute << " : " << this->seconde;
		}
		else {
			cout << (this->heure-12) << " : " << this->minute << " : " << this->seconde << " pm";
		}
	}
	else{
		cout << this->heure <<  " : " << this->minute << " : " << this->seconde << " am";
	}
}

void Temps::affichage_française() const
{
	cout << this->heure << " : " << this->minute << " : " << this->seconde;
}

bool Temps::inferieur(const Temps& temps) const
{
	if (this->heure < temps.heure) {
		return true;
	}
	else if (this->heure == temps.heure) {
		   if (this->minute < temps.minute) {
               return true;
	      	}
	       else if (this->minute == temps.minute && this->seconde < temps.seconde) {
		     	return true;
		    }
	       else {
			return false;
	        	}
	}
	else {
       return false;
	}
	
}

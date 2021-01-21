#pragma once
#include "Heure.h"
class DateH :
    public Heure
{
private:
    int j, mois, a;
public:
    DateH(int j= 1, int mois =1, int a= 1582, int h=0, int m=0, int s=0);
    void afficher()const;//masquage
    bool operator>(const DateH& d)const;
    int convert()const;
    bool Bxtil()const;
    int maxjourmois()const;
};


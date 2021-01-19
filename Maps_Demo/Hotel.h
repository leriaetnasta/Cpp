#pragma once
#include "PointGeo.h"
#include<string>
#include<iostream>
using namespace std;

class Hotel :
    public PointGeo
{
public:
    Hotel(string nom, double x, double y);
    ~Hotel();
    Hotel(const Hotel& h);
    Hotel& operator=(const Hotel& h);
    //void afficher()const;
private:
    string sematique;
    string nom;
    int nombreChambre;
    double prix;
    int nombreReservation;
    int star;
};


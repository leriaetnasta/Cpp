#pragma once
#include "Employe.h"
//la suppression de l'objet composé => suppression de l'objet composant : composition si oui l'agregation sinon
class Responsable :
    public Employe
{

    Employe **emp;
    string titre;
    string nom;
public:
    Responsable(string, string , int, Employe **emp);
    void afficher()const override;
    
};


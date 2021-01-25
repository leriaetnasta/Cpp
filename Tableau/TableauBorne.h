#pragma once
#include "Tableau.h"
class TableauBorne :
    public Tableau
{
private:
    float inf, sup;
public:
    TableauBorne(float i, float s, int t);
    // float operator[](int i);
    const float& operator[](int i);
    void operator()(int i, float f);
};


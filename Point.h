#pragma once
#include <string>
#include <iostream>
using namespace std;
class Point {
private:
    double x;
    double y;
public:
    Point();
    Point(double x, double y);
    Point(const Point& autre);
    string affichage()const;
    Point translate(double x, double y);
    bool operator==(const Point& autre)const;
    Point operator+(const Point& autre)const;
    double distance(const Point& autre)const;

};

#include "Point.h"

Point::Point() {
    this->x = 0.0;
    this->y = 0.0;

}
Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}
Point::Point(const Point& autre) {
    this->x = autre.x;
    this->y = autre.y;
}
string Point::affichage()const {
    string s;
    s = "(" + to_string(this->x) + "," + to_string(this->y) + ")";
    return s;
}
Point Point::translate(double x, double y)
{
    this->x += x;
    this->y += y;
    return *this;
}
bool Point::operator==(const Point& autre)const
{
    if (this->x == autre.x && this->y == autre.y) {
        return true;
    }
    else {
        return false;
    }

}
Point Point::operator+(const Point& autre)const
{
    Point p;
    p.x = this->x + autre.x;
    p.y = this->y + autre.y;
    return p;
}

double Point::distance(const Point& autre) const
{

    return sqrt(pow(this->x - autre.x, 2) - pow(this->y - autre.y, 2));
}

#include "pch.h"
#include "Vector3D.h"
using namespace Algo;
Algo::Vector3D::Vector3D(float x, float y, float z)
{
	this->V[0] = x;
	this->V[1] = y;
	this->V[2] = z;
}

void Algo::Vector3D::print() const
{
	for (int i = 0;i < 3;i++) {
		cout << "V["<<i<<"]"<<"= "<< this->V[i]<<"\n";
	}
}

Vector3D& Algo::Vector3D::operator+(const Vector3D& autre)
{
	for (int i = 0;i < 3;i++) {
		this->V[i] += autre.V[i];
		
	}return *this;
}

Vector3D& Algo::Vector3D::operator-(const Vector3D& autre)
{
	for (int i = 0;i < 3;i++) {
		this->V[i] -= autre.V[i];
	} return *this;

}

float Algo::Vector3D::operator*(const Vector3D& autre)
{
	return (this->V[0]*autre.V[0]) + (this->V[1]*autre.V[1]) + (this->V[2]*autre.V[2]);
}

bool Algo::Vector3D::operator==(const Vector3D& autre)
{
	bool resultat = true;
	for (int i = 0;i < 3;i++) {
		resultat = (resultat && this->V[i] == autre.V[i]);
	}
	return resultat;
}

bool Algo::Vector3D::operator!=(const Vector3D& autre)
{
	return !(this->operator==(autre));
}

float Algo::Vector3D::at(int i) const
{
	return this->V[i];
}

float Algo::Vector3D::operator[](int i)
{
	return this->at(i);
}

Vector3D& Algo::Vector3D::creator()
{
	Vector3D Vect;
	return Vect;
}

#pragma once
#include<iostream>
using namespace std;
namespace Algo {
	class Vector3D
	{
	private:
		float V[3];
    public:
		Vector3D(float = 0.0, float = 0.0, float = 0.0);
		Vector3D(const Vector3D&) = delete;
		Vector3D& operator=(const Vector3D&) = delete;	
		void print()const;
		Vector3D& operator+(const Vector3D&);
		Vector3D& operator-(const Vector3D&);
		float operator*(const Vector3D& autre);
		bool operator==(const Vector3D& autre);
		bool operator!=(const Vector3D&);
		float at(int i)const;
		float operator[](int i);
		Vector3D& creator();
	};

}
#pragma once
class PointGeo
{
protected:
	double distance(const PointGeo&)const;
private:
	double x, y;
	PointGeo translate(double, double);
public:
	PointGeo();
	~PointGeo();
	PointGeo(double, double);
	void afficher()const;
	PointGeo(const PointGeo& p);
	PointGeo& operator=(const PointGeo& p);
};


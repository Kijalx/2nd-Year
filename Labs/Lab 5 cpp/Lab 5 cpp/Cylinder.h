#pragma once
class Cylinder
{
private:
	float radius;
	float height;
public:
	Cylinder();
	Cylinder(float, float);
	void setDim();
	float getArea();
	float getVol();
	void print();
};
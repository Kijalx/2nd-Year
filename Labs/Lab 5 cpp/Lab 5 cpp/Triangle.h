#pragma once							//headerguard

/* Another HeaderGuard 
#ifndef TRIANGLE_H
#define TRIANGLE_H

.....

#endif
*/

class Triangle
{
private:
	float base;
	float height;
public:
	Triangle();
	Triangle(float, float);
	void setDim();
	float getArea();
	void print();
};
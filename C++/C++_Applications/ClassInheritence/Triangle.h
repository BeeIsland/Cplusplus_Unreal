#pragma once
#include "Shape.h"
class Triangle : public Shape
{
private:
	double Height;
	double Base;

public:
	double getArea();
	Triangle(double height, double base);

};


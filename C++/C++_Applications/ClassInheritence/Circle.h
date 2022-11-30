#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	double Radius;

public:
	double getArea();
	Circle(double radius);

};


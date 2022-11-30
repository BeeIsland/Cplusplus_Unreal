#include "Circle.h"

double Circle::getArea()
{
	return 3.1459 * pow(Radius,2);
}

Circle::Circle(double radius)
{
	Radius = radius;
	Color = "blue";
}
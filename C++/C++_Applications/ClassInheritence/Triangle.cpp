#include "Triangle.h"

double Triangle::getArea()
{
	return .5 * Height * Base;
}

Triangle::Triangle(double height, double base)
{
	Height = height;
	Base = base;
	Color = "green";
}
#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
	double Height;
	double Width;

public:
	double getArea();
	Rectangle(double height, double width);

};


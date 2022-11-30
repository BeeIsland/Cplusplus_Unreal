#include "Rectangle.h"

double Rectangle::getArea()
{
	return Height * Width;
}

Rectangle::Rectangle(double height, double width)
{
	Height = height;
	Width = width;
	Color = "yellow";
}

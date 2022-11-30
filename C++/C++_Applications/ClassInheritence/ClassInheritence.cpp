#include <iostream>
using std::cout;

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"


int main()
{
    Shape shape;
    Rectangle rect(10.0, 20.0);
    Triangle tri(10.0, 20.0);
    Circle circle(sqrt(1/3.1459)); // For fun I made a circle with a radius such that its area is 1 unit

    cout << shape.getArea() << '\n';
    cout << shape.Color << '\n';
    cout << rect.getArea() << '\n';
    cout << rect.Color << '\n';
    cout << tri.getArea() << '\n';
    cout << tri.Color << '\n';
    cout << circle.getArea() << '\n';
    cout << circle.Color << '\n';
    
    return 0;
}
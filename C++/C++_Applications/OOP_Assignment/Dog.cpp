#include "Dog.h"
#include <iostream>
using std::cout;

void Dog::Shake()
{
	cout << "The dog shook your hand.\n";
}

void Dog::Sit()
{
	cout << "The dog sat.\n";
}


void Dog::LayDown()
{
	cout << "The dog has lied down.\n";
}

Dog::Dog(string breed, string color, double height, double weight)
{
	Breed = breed;
	Color = color;
	Height = height;
	Weight = weight;
}

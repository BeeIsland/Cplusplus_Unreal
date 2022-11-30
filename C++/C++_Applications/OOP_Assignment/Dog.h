#pragma once
#include <string>
using std::string;

class Dog
{
private:
	string Breed;
	string Color;
	double Height;
	double Weight;


public:
	void Shake();
	void Sit();
	void LayDown();

	Dog(string breed, string color, double height, double weight);

};


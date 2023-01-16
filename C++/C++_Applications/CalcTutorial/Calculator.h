#pragma once
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

class Calculator
{
public:
	double Calculate(double x, char oper, double y);
	void plusMinus(vector<int> arr);
};




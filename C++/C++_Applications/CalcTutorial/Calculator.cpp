#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;

	}
}

void Calculator::plusMinus(vector<int> arr) {

    int neg = 0;
    int pos = 0;
    int zer = 0;
    int total = 0;

    for (int a : arr) {
        if (a > 0) { pos++; }
        else if (a < 0) { neg++; }
        else { zer++; }
        total++;
    }

    neg = neg / total;
    pos = pos / total;
    zer = zer / total;

    cout << pos << '\n' << neg << '\n' << zer << '\n';

}


#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    string test = "test";
    int testINt = 1;



    
    cout << &testINt << '\n';
    /*
    cout << "Calculator Console App\n\n";
    cout << "Please enter the operation to perform. Format: a+b | a*b | a/b" << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exeption\n";
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << "\n";
    }
    */
    return 0;
}
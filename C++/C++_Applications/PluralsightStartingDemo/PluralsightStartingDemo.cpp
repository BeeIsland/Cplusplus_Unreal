#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::count;
using std::sort;

#include "mathFunctions.h"
#include "BankAccount.h"

int main()
{
    
    //Math functions main code
    /*
    //Writing and reading text from the console
    cout << "Hello World!\n";

    string greeting = "Hello, ";

    string addendum = "friend!";

    string both = greeting + addendum;

    cout << both << '\n';

    int i = 0;
    cout << "Please input a number to double: ";
    cin >> i;
    cout << "\nAnswer: " << i * 2 << '\n';

    //Loops
    for (int i = 0; i < 10; i++)
    {
        cout << i << " times through the loop\n";
    }

    int resultingNum = add(1, 2, 3);

    cout << resultingNum;
    
    //Vectors
    vector<int> nums;

    nums.push_back(3);

    for (int i = 0; i < 10; i++)
    {
        nums.push_back(i);
    }

    for (auto item : nums)
    {
        cout << "\n " << item << " ";
    }

    sort(begin(nums), end(nums));
    
    for (auto item : nums)
    {
        cout << "\n " << item << " ";
    }

    */

    //BankAccount main code

    BankAccount a1;
    a1.Deposit(90);

    for (auto s : a1.Report())
    {
        cout << s << '\n';
    }

    a1.Withdraw(50);
    if (a1.Withdraw(100))
    {
        cout << "second withdraw succeeds" << '\n';
    }

    cout << "After withdrawing $50 then $100" << '\n';
    for (auto s : a1.Report())
    {
        cout << s << '\n';
    }


    //Ending main
    return 0;

}
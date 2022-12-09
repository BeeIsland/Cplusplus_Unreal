

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <boost/optional.hpp>
using namespace boost;

#include <boost/any.hpp>


class Person
{
public:
    Person(string firstName, string lastName) :
        firstName(firstName), lastName(lastName) {};

    string firstName, lastName;
    optional<string> middleName;
    string title;
};


int main()
{
    //Demo of optionals
    Person p{ "John", "Watson" };

    p.middleName = "Bin";

    if (p.middleName) {
        cout << *p.middleName << '\n';
    }

    cout << p.title << '\n';

    //Demo of the 'any' type
    any w;
    any x{ 2.0 };
    vector<any> y{ 42, "life" };
    any z = string("test");

    if (!x.empty()) {
        cout << x.type().name() << '\n';
    }

    int a = any_cast<int>(y[0]);
    cout << "The value is " << a << '\n';

    //int b = any_cast<int>(y[1]); // This doesn't work 

    
    for (any a : y) {
        //Outputs any integer in the any vector
        int* value = any_cast<int>(&a);
        if (value != nullptr) {
            cout << *value << '\n';
        } 
        //Outputs the strings in the any vector
        const char** text = any_cast<const char*>(&a);
        if (text != nullptr) {
            cout << *text << '\n';
        }

    }
    
    return 0;
}
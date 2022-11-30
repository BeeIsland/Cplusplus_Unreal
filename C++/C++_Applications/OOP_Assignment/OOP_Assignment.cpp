#include <iostream>
#include "Dog.h"




int main()
{
    Dog GoodBoy{ "Hound", "Brown", 2, 60 };
    GoodBoy.LayDown();
    GoodBoy.Shake();
    GoodBoy.Sit();
}
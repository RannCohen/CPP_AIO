#include <iostream>
#include "Cheese.hpp"

using namespace std;

int cheeseCount;

void OneMoreCheeseGone(Cheese *Block)
{
    cheeseCount--;
    Block->status = "GONE";
}

void Cheese::eat()
{
    cout << "Eaten up! Yummy" << endl;
    OneMoreCheeseGone(this);
}

void Cheese::rot()
{
    cout << "Rotted away! Yuck" << endl;
    OneMoreCheeseGone(this);
}

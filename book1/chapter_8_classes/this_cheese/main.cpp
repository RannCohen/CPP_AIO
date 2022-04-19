#include <iostream>
#include "Cheese.hpp"

using namespace std;

int main()
{
    Cheese *asiago = new Cheese;
    Cheese *limburger = new Cheese;

    cheeseCount = 2;

    asiago->eat();
    limburger->rot();

    cout << endl;
    cout << "Cheese count: " << cheeseCount << endl;
    cout << "asiago: " << asiago->status << endl;
    cout << "limburger: " << limburger->status << endl;

    return 0;
}
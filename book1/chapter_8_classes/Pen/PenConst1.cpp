#include <iostream>
#include "Pen.h"

using namespace std;

void Inspect(const Pen *CheckItOut)
{
    cout << CheckItOut->Brand<< endl;
    CheckItOut->Length = 10.0;                  //becouse that the parameter is const - length cannot be changed
}

int main()
{
    Pen *MyPen = new Pen();
    MyPen->Brand = "Spy Plus Camera";

    Inspect(MyPen);
    return 0;
}
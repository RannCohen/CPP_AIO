#include <iostream>

using namespace std;

const int parkingSpaces = 80;
const string StoreName = "Joe's food haven";
const float pi = 3.1415926;

int main()
{
    cout << "importent message" << endl;
    cout << "Here at " << StoreName << endl;
    cout << "bla" << endl;
    cout << "parking: " << parkingSpaces << endl;

    cout << parkingSpaces *2 << endl;

    float radius = 5;
    float area = radius * pi * pi;

    cout << "Radius = " << radius << endl;
    cout << "Area = " << area << endl;

    return 0;
}

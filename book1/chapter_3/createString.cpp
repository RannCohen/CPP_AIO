#include <iostream>

using namespace std;

int main()
{
    string myString;
    myString = "abcdef";
    cout << myString[2] << endl;
    char myChar;
    myChar = myString[2];
    cout << myChar << endl;
    myString += " ghijk";
    cout << myString << endl;
    return 0;
}
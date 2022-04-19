#include <iostream>

using namespace std;

int main()
{
    string originalString = "Hello";
    const string &stringCopy(originalString);

    int orgNum = 5;
    const int &AliNum(orgNum);


    originalString = "Goodbye";
    orgNum = 6;

    cout << originalString << endl;
    cout << stringCopy << endl;
    cout << orgNum << endl;
    cout << AliNum << endl;


    return 0;
}
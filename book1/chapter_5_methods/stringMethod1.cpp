#include <iostream>

using namespace std;

int main()
{
    string myString;
    myString = "this is a changeble string";

    cout << myString << endl;

    myString.replace(5, 2, "are");

    cout << "are insted of is: " << myString << endl;

    myString.erase(16, 1);

    cout << "removed the 'e' in changed: " << myString << endl;

    myString.append(" that i wrote!");

    cout << "added text to the end: " << myString << endl;

    return 0;
}
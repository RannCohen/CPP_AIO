#include <iostream>

using namespace std;

int main()
{
    string HorribleMovie;
    string *ptrToString;

    HorribleMovie = "L.A. Confidential";
    ptrToString = &HorribleMovie;

    // for (unsigned int i = 0; i < HorribleMovie.length(); i++)
    for (unsigned int i = 0; i < (*ptrToString).length(); i++)
    {
        cout << (*ptrToString)[i] << " ";
    }
    
    cout << endl;
    return 0;
}
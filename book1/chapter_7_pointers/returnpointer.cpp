#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

string *GetSecretCode()
{
    string *code = new string;
    code->append("CR");

    int randoNumber = rand();
    ostringstream converter;
    converter << randoNumber;

    code->append(converter.str());
    code->append("NQ");

    return code;
}

int main()
{
    string *newcode;
    int index;
    for (index = 0; index < 10; index++)
    {
        newcode = GetSecretCode();
        cout <<*newcode << endl;
    }
    
    return 0;
}
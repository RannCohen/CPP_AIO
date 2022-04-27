#include <iostream>
#include <sstream>      //For istringstream, ostringstream

using namespace std;

int stringToNumber(string myString)
{
    istringstream converter(myString);  //Converts from string to number.
    int result;                         //Contains the operation results.

    // Preform the conversion and return the result.
    converter >> result;
    return result;
}

string numberToString(int number)
{
    ostringstream converter;            // Converts from number to string.

    //Preform the conversion and return the result.
    converter << number;
    return converter.str();
}

int main()
{
    float numberOfKids;     // Contains the theoretical number of kids.
    int actualKids;         // Contains an actual number of kids.

    /*  You can theoretically have 2.5 kids, but in the real world,
        you can't. Convert the theoretical number of kids to a real
        number by truncating numberOfKids and display the results. */
    cout << "Float to Integer" << endl;
    cout << "(Truncated)" << endl;
    numberOfKids = 2.5;
    actualKids = (int)numberOfKids;     // Casting.
    cout << numberOfKids << " " << actualKids << endl;

    // Preform the same task as before, but use a theoretical 2.1
    // kids this time.
    numberOfKids = 2.1;
    actualKids = (int)numberOfKids;     // Casting.
    cout << numberOfKids << " " << actualKids << endl;

    // This time we'll use 2.9 kids.
    numberOfKids = 2.9;
    actualKids = (int)numberOfKids;     // Casting.
    cout << numberOfKids << " " << actualKids << endl;
    cout << "Float to Integer" << endl;

    // this process rounds the number, instead of truncating it.
    // We do it using the same three numbers as before.
    cout << "(rounded)" << endl;
    numberOfKids = 2.5;
    actualKids = (int)(numberOfKids + .5);
    cout << numberOfKids << " " << actualKids << endl;

    // Do it again with 2.1 kids.
    numberOfKids = 2.1;
    actualKids = (int)(numberOfKids + .5);
    cout << numberOfKids << " " << actualKids << endl;

    // Do it yet again using 2.9 kids.
    numberOfKids = 2.9;
    actualKids = (int)(numberOfKids + .5);
    cout << numberOfKids << " " << actualKids << endl;
    cout << "Integer to Float" << endl;

    // In this case, use the "stringToNumber()" to preform the conversion.
    actualKids = 3;
    numberOfKids = actualKids;
    cout << numberOfKids << endl << endl;
    cout << "String to number" << endl;
    int x = stringToNumber("12345") * 50;
    cout << x << endl << endl;

    // In this case, use the "numberToString()" to preform the conversion.
    cout << "Number to string" << endl;
    string mtString = numberToString(80525323);
    cout << mtString << endl;

    return 0;
}
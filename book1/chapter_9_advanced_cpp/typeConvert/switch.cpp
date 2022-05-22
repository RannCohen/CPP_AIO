#include <iostream>

using namespace std;

int main()
{
    /* Display */
    cout << "Choose your favorite:" << endl;
    cout << "1. Apples" << endl;
    cout << "2. Bananas" << endl;
    cout << "3. Fries worms" << endl;
    cout << "4. Poison Apples" << endl;
    cout << "5. Lobster" << endl;

    /* get user input */
    char ch = getchar();

    /* Check for valid input (charecter)*/
    while(ch < '1' || ch > '5')
    {
        ch = getchar();
    }

    cout << "You choose " << ch << endl;
    switch (ch)
    {
    case '1':
        cout << "Apples are good for you" << endl;
        break;
    case '2':
        cout << " bananas bla bla" << endl;
        break;
    case '3':
        cout << "euuuuu" << endl;
        break;
    case '4':
        cout << " WHY?!" << endl;
        break;
    case '5':
        cout << "EXPENSIVE" << endl;
        break;
    }

    return 0;
}
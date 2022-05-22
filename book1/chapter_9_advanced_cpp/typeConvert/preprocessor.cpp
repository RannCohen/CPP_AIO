#include <iostream>

using namespace std;

#ifdef UNIVAC
const int total = 200;
const string compname = "UNIVAC";
#elif defined(HAL2000)
const int total = 300;
const string compname = "HAL2000";
#else
const int total = 400;
const string compname = "My Computer";
#endif

// MACROS: 
#define oldmax(x, y) ((x) > (y) ? (x) : (y))
#define MYSPECIALNUMBER 42

int main()
{
    cout << "Welcome to " << compname << endl;
    cout << "Total is:" << endl;
    cout << total << endl << endl;

    /* TRY THE MACRO: */
    cout << "*** max ***" << endl;
    cout << oldmax(5, 10) << endl;
    cout << oldmax(20, 15) << endl;
    cout << MYSPECIALNUMBER << endl << endl;

    /* SOME STANDART MACROS: */
    cout << "*** Predefined Macros ***" << endl;
    cout << "This is file " << __FILE__ << endl;
    cout << "This is line " << __LINE__ << endl;
    cout << "Compiled on " << __DATE__ << endl;
    cout << "Compiled at " << __TIME__ << endl << endl;

    /* HERE'S HOW SOME PEPOLE USE #define TO SPECIPY A DEBUG VERSION OR RELEASE VERSION */
    cout << "*** total ***" << endl;
    int i;
    int j = 0;
    for(i = 0;i < total; i++)
    {
        j += i;
    }

#ifdef DEBUG
    cout << "The value of j is " << j << endl;
#else
    cout << j << endl;
#endif

    return 0;
}
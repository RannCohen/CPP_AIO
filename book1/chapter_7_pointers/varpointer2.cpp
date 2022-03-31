#include <iostream>

using namespace std;

// void changesAreGood(int *myparam)
// {
//     (*myparam) += 10;
//     cout << "Inside the function: " << (*myparam) << endl;
// }
void changesAreGood(int &myparam)
{
    myparam += 10;
    cout << "Inside the function: " << myparam << endl;
}

int main()
{
    int myNumber = 30;
    cout << "Before the function: " << myNumber << endl;

    // changesAreGood(&myNumber);
    changesAreGood(myNumber);
    cout << "After the function: " << myNumber << endl;
    return 0;
}
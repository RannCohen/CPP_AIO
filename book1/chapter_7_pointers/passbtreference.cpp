#include <iostream>

using namespace std;

void messMeUp(int &myparam)
{
    myparam = myparam *2 + 10;
}

int main()
{
    int myNumber = 30;
    messMeUp(myNumber);
    cout << myNumber << endl;
    return 0;
}
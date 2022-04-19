#include <iostream>

using namespace std;

class Vehicle
{
    public:
        int numOfWheels;

        void drive()
        {
            cout << "Driving, driving, driving..." << endl;
        }
};

class Toyota : public Vehicle
{
    public:
        void meAndMyToyota()
        {
            cout << "Just me and my toyota!" << endl;
        }
};

int main()
{
    Toyota myCar;
    myCar.meAndMyToyota();
    myCar.drive();
    
    return 0;
}
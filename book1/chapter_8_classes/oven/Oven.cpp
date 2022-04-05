#include <iostream>

using namespace std;

class Oven
{
private:
    void TurnOnHeatingElement();
    void TurnOffHeatingElement();
public:
    void Bake(int Temperature);
};

void Oven::TurnOnHeatingElement()
{
    cout << "Heating element is now ON! Be carefull!" << endl;
}

void Oven::TurnOffHeatingElement()
{
    cout << "Heating element is now off. Relax!" << endl;
}

void Oven::Bake(int Temperature)
{
    TurnOnHeatingElement();
    cout << "Baking!" << endl;
    TurnOffHeatingElement();
}

int main()
{
    Oven bosch;
    bosch.Bake(875);
    return 0;
}
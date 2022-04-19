#include <iostream>

using namespace std;

class Walnut
{
    public:
        int size;
};

class Squirrel
{
    private:
        Walnut *myDinner;
    
    public:
        Squirrel();
        ~Squirrel();
        void print();
};

Squirrel::Squirrel()
{
    cout << "Startting!" <<endl;
    myDinner = new Walnut;
    myDinner->size = 30;
}

Squirrel::~Squirrel()
{
    cout << "Cleanning up my mess!" << endl;
    delete myDinner;
}

void Squirrel::print()
{
    cout << "i have " << myDinner->size << " walnuts!" << endl;
}

int main()
{
    Squirrel *Moshe = new Squirrel;
    Squirrel *Nisim = new Squirrel;

    Moshe->print();
    Nisim->print();

    delete Moshe;
    delete Nisim;
    return 0;
}
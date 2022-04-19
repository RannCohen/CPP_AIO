#include <iostream>

using namespace std;

class Squirrel
{
    private:
        string name;

    public:
        Squirrel(string startName);
        void whatIsMyName();
};

Squirrel::Squirrel(string startName)
{
    cout << "Starting!" << endl;
    name = startName;
}

void Squirrel::whatIsMyName()
{
    cout << "My name is " << name << endl;
}

int main()
{
    Squirrel *Moshe = new Squirrel("Mosh");
    Squirrel *Nisim = new Squirrel("Nis");

    Moshe->whatIsMyName();
    Nisim->whatIsMyName();

    delete Moshe;
    delete Nisim;

    return 0;
}
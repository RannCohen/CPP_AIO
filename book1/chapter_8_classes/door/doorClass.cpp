#include <iostream>

using namespace std;

class Cat
{
    public:
        string name;
};

class Dog
{
    public:
        string name;
};

class Human
{
    public:
        string name;
};

class Door
{
    private:
        int howManyInside;
    
    public:
        void start();
        void goThrough(Cat *acat);
        void goThrough(Dog *adog);
        void goThrough(Human *ahuman);
};

void Door::start()
{
    howManyInside = 0;
}

void Door::goThrough(Cat *somebody)
{
    cout << "Welcome, " << somebody->name << endl;
    cout << "A cat just entered!" << endl;
    howManyInside++;
}

void Door::goThrough(Dog *somebody)
{
    cout << "Welcome, " << somebody->name << endl;
    cout << "A dog just entered!" << endl;
    howManyInside++;
}

void Door::goThrough(Human *somebody)
{
    cout << "Welcome, " << somebody->name << endl;
    cout << "A human just entered!" << endl;
    howManyInside++;
}


int main()
{
    Door *entrance = new Door;
    entrance->start();

    Cat *sneekyGirl = new Cat;
    sneekyGirl->name = "Sneeky Girl";

    Dog *littleGeorge = new Dog;
    littleGeorge->name = "George";

    Human *me = new Human;
    me->name = "Ran!";

    entrance->goThrough(sneekyGirl);
    entrance->goThrough(littleGeorge);
    entrance->goThrough(me);

    delete entrance;
    delete sneekyGirl;
    delete littleGeorge;
    delete me;
    
    return 0;
}
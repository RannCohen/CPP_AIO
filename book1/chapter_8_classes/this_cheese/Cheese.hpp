#ifndef CHEESE_H_INCLUDED
#define CHEESE_H_INCLUDED

using namespace std;

extern int cheeseCount;

class Cheese
{
public:
    string status;
    void eat();
    void rot();
};

void OneMoreCheeseGone(Cheese *Block);

#endif //CHEEDE_H_INCLUDED
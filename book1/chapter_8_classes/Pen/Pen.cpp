#include <iostream>
#include "Pen.h"

using namespace std;


void Pen::write_on_paper(string words)
{
    if(InkLevelPrecent <= 0)
    {
        cout << "Oops! out of ink!" << endl;
    }
    else
    {
        cout << words << endl;
        InkLevelPrecent -= words.length();
    }
}

void Pen::break_in_half()
{
    InkLevelPrecent /= 2;
    Length /= 2.0;
}

void Pen::run_out_of_ink()
{
    InkLevelPrecent = 0;
}

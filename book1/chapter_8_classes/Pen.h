#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED

using namespace std;

enum Color
{
    blue,
    red,
    black,
    clear,
    grey
};

enum PenStyle
{
    ballpoint,
    felt_tip,
    funtain_pen
};

class Pen
{
    public:
        Color InkColor;
        Color ShellColor;
        Color CapColor;
        PenStyle Style;
        float Length;
        string Brand;
        int InkLevelPrecent;

        void write_on_paper(string words)
        {
            if(InkLevelPrecent <= 0)
                cout << "Oops! out of ink!" << endl;
            else
            {
                cout << words << endl;
                InkLevelPrecent -= words.length();
            }
        }

        void break_in_half()
        {
            InkLevelPrecent /= 2;
            Length /= 2.0;
        }

        void run_out_of_ink()
        {
            InkLevelPrecent = 0;
        }

};

#endif //PEN_H_INCLUDED
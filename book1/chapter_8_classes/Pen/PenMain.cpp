#include <iostream>
#include "Pen.h"

using namespace std;

int main()
{
    /* first instance                   */
    Pen FavoritePen;

    FavoritePen.InkColor = blue;
    FavoritePen.ShellColor = grey;
    FavoritePen.Style = ballpoint;
    FavoritePen.Length = 5.5;
    FavoritePen.Brand = "office depot";
    FavoritePen.InkLevelPrecent = 30;
    /***********************************/

    /* second instance                  */
    Pen WorstPen;

    WorstPen.InkColor = red;
    WorstPen.ShellColor = red;
    WorstPen.CapColor = black;
    WorstPen.Style = funtain_pen;
    WorstPen.Length = 5.0;
    WorstPen.Brand = "Parker";
    WorstPen.InkLevelPrecent = 60;
    /************************************/

    cout << "This is my favorite pen" << endl;
    cout << "Color: " << FavoritePen.InkColor << endl;
    cout << "Brand: " << FavoritePen.Brand << endl;
    cout << "Ink level: " << FavoritePen.InkLevelPrecent << "%" << endl;

    FavoritePen.write_on_paper("Hello I am a pen");
    FavoritePen.write_on_paper("Hello I am a pen");
    FavoritePen.write_on_paper("Hello I am a pen");
    cout << "Ink Level: " << FavoritePen.InkLevelPrecent << "%" << endl;    

    return 0;
}
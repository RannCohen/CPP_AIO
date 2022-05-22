#include <iostream>

using namespace std;

class Colors
{
    public:
        enum ColorEnum { blue, red, green, yellow, black};
        string AsString();
        Colors(Colors::ColorEnum value);
        
    protected:
        ColorEnum value;
};

Colors::Colors(Colors::ColorEnum initvalue)
{
    value = initvalue;
}

string Colors::AsString()
{
    switch (value)
    {
        case blue:
            return blue;
            break;
        case red:
            return red;
            break;
        case green:
            return green;
            break;
        case yellow:
            return yellow;
            break;
        case black:
            return black;
            break;
        default:
            return " not found";
            break;
    }
}

int main()
{
    Colors InkColor = Colors::red;
    cout << InkColor.AsString() << endl;
    return 0;
}
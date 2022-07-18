#include <iostream>

using namespace std;

class Colors
{
    public:
        enum ColorEnum {blue, red, green, yellow, black};
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
            return "blue";

        case red:
            return "red";

        case green:
            return "green";

        case yellow:
            return "yellow";

        case black:
            return "black";
            
        default:
            return " not found";

    }
}

int main()
{
    Colors InkColor = Colors::red;
    cout << InkColor.AsString() << endl;
    cout << InkColor.red << endl;
    return 0;
}
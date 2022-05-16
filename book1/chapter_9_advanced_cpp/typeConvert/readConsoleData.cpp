#include <iostream>
#include <sstream>
// #include <ncurses.h>

/**************/
#include <termios.h>
#include <stdio.h>

static struct termios old, current;

/* Initialize new terminal i/o settings */
void initTermios(int echo) 
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  current = old; /* make new settings same as old settings */
  current.c_lflag &= ~ICANON; /* disable buffered i/o */
  if (echo) {
      current.c_lflag |= ECHO; /* set echo mode */
  } else {
      current.c_lflag &= ~ECHO; /* set no echo mode */
  }
  tcsetattr(0, TCSANOW, &current); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void) 
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo) 
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void) 
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void) 
{
  return getch_(1);
}
/*************/
using namespace std;

int stringToNumber(string MyString)
{
    istringstream converter(MyString);      // holds the string
    int result;                             // holds the integer result

    // convertion:
    converter >> result;
    return result;
}

string enterOnlyNumbers()
{
    string numAsString = " ";       // holds the numeric string
    char ch = getch();             // obtains a single character from the user

    // keep requasting characters until the user presses enter:
    while (ch != '\n')             // \r is the enter
        {
        // add characters only if they are numbers
        if(ch >= '0' && ch <='9')
        {
            cout << ch;
            numAsString += ch;
        }

        // get the next character from user:
        ch = getch();
    }
    return numAsString;
}

string enterPassword()
{
    string numAsString = " ";        // holds password string
    char ch = getch();

    while(ch != '\n' )
    {
        cout << '*';
        // add the character to the password string
        numAsString += ch;

        ch  = getch();
    }
    return numAsString;
}


int main()
{
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << endl;

    int x;
    cout << endl;
    cout << "enter a number, any number! ";
    cin >> x;
    cout << "you choose " << x << endl;

    fflush(stdin);

    cout << endl;
    cout << "This time you'll only be able to enter a number!" << endl;
    cout << "Enter a number, any number! ";
    string entered = enterOnlyNumbers();
    int num = stringToNumber(entered);
    cout << endl << "You entered " << num << endl;

    // now the password
    cout << endl;
    cout << "Enter your password! ";
    string password = enterPassword();
    cout << endl << "Shhhh, it's " << password << endl;

    return 0;
}

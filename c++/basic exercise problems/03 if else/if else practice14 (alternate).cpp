#include <iostream>
using namespace std;

int main()
{
    char character;

    cout << "Enter character: ";
    cin >> character;

    if(character >= 'a' && character <= 'z')
    {
        cout << "Lowercase letter" << endl;
    }
    else if(character >= 'A' && character <= 'Z')
    {
        cout << "Uppercase letter" << endl;
    }
    else if(character >= '0' && character <= '9')
    {
        cout << "Digit" << endl;
    }
    else if((character >= '!' && character <= '/') || (character >= ':' && character <= '@') || (character >= '[' && character <= '`') || (character >= '{' && character <= '~'))
    {
        cout << "Symbol" << endl;
    }
    else
    {
        cout << "Others" << endl;
    }
}

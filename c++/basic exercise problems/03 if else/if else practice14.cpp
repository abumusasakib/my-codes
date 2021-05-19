#include <iostream>
using namespace std;

int main()
{
    char character;

    cout << "Enter a character: ";
    cin >> character;

    int decimalForm = (int) character;

    if(decimalForm >= 97 && decimalForm <= 122)
    {
        cout << "Lowercase letter" << endl;
    }
    else if(decimalForm >= 65 && decimalForm <= 90)
    {
        cout << "Uppercase letter" << endl;
    }
    else if(decimalForm >= 48 && decimalForm <= 57)
    {
        cout << "Digit" << endl;
    }
    else if((decimalForm >= 33 && decimalForm <= 47) || (decimalForm >= 58 && decimalForm <= 64 || (decimalForm >= 91 && decimalForm <= 96) || (decimalForm >= 123 && decimalForm <= 126) || (decimalForm >= 128 && decimalForm <= 254)))
    {
        cout << "Symbol" << endl;
    }
    else
    {
        cout << "Others" << endl;
    }
}

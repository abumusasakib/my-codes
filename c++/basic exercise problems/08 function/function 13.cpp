#include <iostream>
#include <string>

using namespace std;

string convertToUppercase(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }

	return str;
}

int main()
{
	string inputString;

    cout<<"Enter the string: ";
    getline(cin, inputString);

    cout << "The string in uppercase is: " << convertToUppercase(inputString);
}
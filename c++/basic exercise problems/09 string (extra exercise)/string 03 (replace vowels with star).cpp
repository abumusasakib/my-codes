#include <iostream>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    int n = str.size();

    for(int i = 0; i < n; i++)
    {
        if((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') || (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
        {
            str[i] = '*';
        }
    }

    cout << str;
}

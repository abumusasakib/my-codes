#include <iostream>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    int n = str.size();

    cout << str[0];

    for(int i = 0; i < n - 1; i++)
    {
        if(str[i] == ' ')
        {
            i++;
            cout << str[i];
        }
    }
}

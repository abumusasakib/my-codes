#include <iostream>

using namespace std;

int main()
{
    string str, lastName;
    char initial[1];
    int i, j, lastNameStartIndex, lastNameSize = 0;

    cout << "Enter a string : ";
    getline(cin, str);

    int n = str.size();

    initial[0] = str[0];

    for(i = 0; i < n - 1; i++)
    {
        if(str[i] == ' ')
        {
            lastNameStartIndex = i + 1;
        }
    }

    for(i = lastNameStartIndex, j = 0; i < n; i++, j++)
    {
        lastName[j] = str[i];
        lastNameSize++;
    }

    for(i = 0; i < lastNameSize; i++)
    {
        cout << lastName[i];
    }

    cout << ", " << initial[0] << ".";
}

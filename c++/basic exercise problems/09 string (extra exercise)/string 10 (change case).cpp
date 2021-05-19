#include <iostream>

using namespace std;

int main()
{
    string str;
    int i;

    cout << "Enter a string : ";
    getline(cin, str);

    int n = str.size();

    for(i = 0; i < n; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = toupper(str[i]);
        }
    }

    for(i = 0; i < n; i++)
    {
        cout << str[i];
    }
}

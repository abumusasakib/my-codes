#include <iostream>

using namespace std;

int main()
{
    string str ,reverseString;
    int i, j;

    cout << "Enter a string :";
    getline(cin, str);

    int n = str.size();

    for(i = n - 1, j = 0; i >= 0; i--, j++)
    {
        reverseString[j] = str[i];
    }

    for(i = 0; i < n; i++)
    {
        cout << reverseString[i];
    }
}

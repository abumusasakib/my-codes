#include <iostream>

using namespace std;

int main()
{
    string str;
    int i, j, startIndex;

    cout << "Enter a string : ";
    getline(cin, str);

    int n = str.size();
    int endIndex = n - 1;

    for(i = n - 1; i >= 0; i--)
    {
        if(str[i] == ' ' || i == 0)
        {
            if(i == 0)
            {
                startIndex = 0;
            }

            else
            {
                startIndex = i + 1;
            }

            for(j = startIndex; j <= endIndex; j++)
            {
                cout << str[j];
            }

            endIndex = i - 1;
            cout << " ";
        }
    }
}

#include <iostream>

using namespace std;

int main()
{
    string str;
    int uppercase = 0, lowercase = 0;

    cout << "Enter a string : ";
    getline(cin, str);

    int n = str.size();

    for(int i = 0; i < n; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            uppercase++;
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lowercase++;
        }
    }

    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
}

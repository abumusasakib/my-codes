#include <iostream>

using namespace std;

int main()
{
    string str1 ,str2;
    int i, j, isPalindrome = 0;

    cout << "Enter a string :";
    getline(cin, str1);

    int n = str1.size();

    for(i = n - 1, j = 0; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }

    for(i = 0; i < n - 1; i++)
    {
        if(str2[i] == str1[i])
        {
            isPalindrome = 1;
        }
        else
        {
            isPalindrome = 0;
        }
    }

    if(isPalindrome == 1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
}

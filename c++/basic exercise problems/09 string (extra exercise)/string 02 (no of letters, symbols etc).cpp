#include <iostream>

using namespace std;

int main()
{
    string str;
    int letter = 0, vowel = 0, digit = 0, symbol = 0, word = 0;

    cout << "Enter a string : ";
    getline(cin, str);

    int n = str.size();

    for(int i = 0; i < n; i++)
    {
        if(str[i] == ' ')
        {
            word++;
        }

        else if(str[i] >= 'A' && str[i] <= 'Z')
        {

            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowel++;
                letter++;
            }

            else
            {
                letter++;
            }
        }

        else if(str[i] >= 'a' && str[i] <= 'z')
        {

            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel++;
                letter++;
            }
            else
            {
                letter++;
            }

        }

        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }

        else
        {
            symbol++;
        }
    }

    cout << "Characters: " << n << endl;
    cout << "Words: " << word + 1 << endl;
    cout << "Letters: " << letter << endl;
    cout << "Vowels: " << vowel << endl;
    cout << "Digits: " << digit << endl;
    cout << "Symbols: " << symbol << endl;
}

#include <iostream>

using namespace std;

int main()
{
    string str;
    int isValid;

    cout << "Enter an integer: ";
    getline(cin, str);

    int n = str.size();

    for(int i = 0; i < n; i++)
    {
        if(str[0] == '+' || str[0] == '-')
        {
            isValid = 1;
            i++;

            if(str[i] >= '0' && str[i] <= '9')
            {
                break;
            }

            else
            {
                isValid = 0;
            }
        }

        else if(!(str[i] >= '0' && str[i] <= '9'))
        {
            isValid = 0;
        }

        else
        {
            isValid = 1;
            break;
        }
    }

    if(isValid == 1)
    {
        cout << "Valid";
    }

    else
    {
        cout << "Invalid";
    }
}

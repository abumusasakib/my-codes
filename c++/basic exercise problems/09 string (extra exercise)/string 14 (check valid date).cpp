#include <iostream>

using namespace std;

int main()
{
    string str;
    int isValid;

    cout << "Enter a date in DD/MM/YYYY format: ";
    getline(cin, str);

    int n = str.size();

    for(int i = 0; i < n; i++)
    {
        if(i == 2 || i == 5)
        {
            continue;
        }

        if((n == 10) && (isdigit(str[i])) && (str[2] == '/' && str[5] == '/'))
        {
            if((str[0] >= '0' && str[0] <= '2') && (str[1] >= '0' && str[1] <= '9'))
            {
                isValid = 1;
            }

            else if((str[0] == '3') && (str[1] >= '0' && str[1] <= '1'))
            {
                isValid = 1;
            }

            else
            {
                isValid = 0;
                break;
            }

            if((str[3] == '0') && (str[4] >= '0' && str[4] <= '9'))
            {
                isValid = 1;
            }

            else if((str[3] == '1') && (str[4] >= '0' && str[4] <= '2'))
            {
                isValid = 1;
            }

            else
            {
                isValid = 0;
                break;
            }

            if(str[6] != '0' || str[7] != '0' || str[8] != '0' || str[9] != '0')
            {
                isValid = 1;
            }

            else
            {
                isValid = 0;
                break;
            }
        }

        else
        {
            isValid = 0;
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


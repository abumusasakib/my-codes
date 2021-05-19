#include <iostream>
using namespace std;

bool checkID(string id)
{
    int stringSize = id.size();
    int digit = 0;

    for(int i = 0; i < stringSize; i++)
    {
        if(id[i] >= '0' && id[i] <= '9')
        {
            digit++;
        }
    }

    if((stringSize == 7 && digit == 7) && (id[2] == '1'|| id[2] == '2' || id[2] == '3') && (id[3] != '0' || id[4] != '0' || id[5] != '0' || id[6] != '0'))
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    string studentID;

    cout << "Enter ID: ";
    getline(cin, studentID);

    if(checkID(studentID) == true)
    {
        cout << "Valid";
    }

    else
    {
        cout << "Invalid";
    }
}


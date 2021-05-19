#include <iostream>
using namespace std;

int main()
{
    char term;

    for(term = 'a'; term <= 'z'; term++)
    {
        if(term < 'z')
        {
            cout << term << ",";
        }
        else
        {
            cout << term << " ";
        }
    }
}


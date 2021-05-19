#include <iostream>
using namespace std;

int main()
{
    char term = 'a';

    while(term <= 'z')
    {
        cout << term << ",";
        term++;

        if(term == 'z')
        {
            cout << term << " ";
        }
        else
        {
            cout << term << ",";
        }
        term++;
    }
}

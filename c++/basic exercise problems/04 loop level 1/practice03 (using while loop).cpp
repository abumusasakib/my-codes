#include <iostream>
using namespace std;

int main()
{
    int term = 0;

    while(term <= 99)
    {
        cout << term << ",";
        term++;

        if(term < 99)
        {
            cout << term << ",";
        }
        else
        {
            cout << term << " ";
        }
        term++;
    }
}

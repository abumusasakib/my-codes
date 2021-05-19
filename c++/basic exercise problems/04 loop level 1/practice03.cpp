#include <iostream>
using namespace std;

int main()
{
    for(int term = 0; term <= 99; term++)
    {
        if(term < 99)
        {
            cout << term << ",";
        }
        else
        {
            cout << term << " ";
        }
    }
}
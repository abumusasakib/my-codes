#include <iostream>
using namespace std;

int main()
{
    float term;

    for(term = 2; term <= 4; term+=0.25)
    {
        if(term < 4)
        {
            cout << term << ",";
        }
        else
        {
            cout << term << " ";
        }
    }
}

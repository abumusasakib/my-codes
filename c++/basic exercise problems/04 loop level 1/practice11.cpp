#include <iostream>

using namespace std;

int main()
{
    int sum  = 0;

    for(int term = 2; term <= 1024; term *= 2)
    {
        sum = sum + term;
		
        if(term < 1024)
        {
            cout << term << "+";
        }
        else
        {
            cout << term << "=";
        }
    }
	
    cout << sum << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //sum of 1 to 100 using for loop
	int sum  = 0;

    for(int term = 1; term <= 100; term++)
    {
        sum = sum + term;
		
        if(term < 100)
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

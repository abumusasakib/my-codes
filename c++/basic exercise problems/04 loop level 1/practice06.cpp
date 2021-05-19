#include <iostream>
using namespace std;

int main()
{
    for(int term = 1; term <= 73; term += 2)
    {
       if(term < 73)
       {
           cout << term << ",";
       }
       else
       {
           cout << term << " ";
       }
    }
}

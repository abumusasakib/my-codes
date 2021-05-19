//https://www.hackerrank.com/challenges/staircase/problem
#include <bits/stdc++.h>

using namespace std;

void staircase(int n)
{
    for(int i = 1; i <= n; i++)
   {
       for(int j = 1; j <= n; j++)
        {
            if(j >= n-i+1 && j <= n)
            {
                cout << "#";
            }

            else
            {
                cout << " ";
            }
        }

        cout << "\n";
   }
}

int main()
{
	int n = 6;
    staircase(n);

    return 0;
}

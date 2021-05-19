//https://www.hackerrank.com/challenges/acm-icpc-team/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, m = 5, sum = 0, counter, largest = 0;
    char topics[600][600];
    
    for(int i = 0; i < n; i++)
    {
       cin >> topics[i];
    }
    
    for(int i = 0; i < n; i++)
    {
		for(int k = i + 1; k < n; k++)
		{
			counter = 0;
			for(int j = 0; j < m; j++)
			{
				if(topics[i][j] == '1' || topics[k][j] == '1')
				{
					counter++;
				}
			}
			if(counter == largest)
			{
				sum++;
			}
			else if(counter > largest)
			{
				largest = counter;
				sum = 1;
			}
		}
	}

    cout << largest << endl;
    cout << sum ;

}

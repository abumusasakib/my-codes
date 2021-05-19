//https://www.hackerrank.com/challenges/kangaroo/problem
#include <bits/stdc++.h>

using namespace std;


string kangaroo(int x1, int v1, int x2, int v2) 
{
    while(x1 < x2)
    {
        x1 = x1 + v1;
        x2 = x2 + v2;
    }
    
    if(x1 == x2)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
	
	int x1 = 0;

    int v1 = 3;

    int x2 = 4;

    int v2 = 2;

    string result = kangaroo(x1, v1, x2, v2);

	
	cout << result << "\n";

    return 0;
}
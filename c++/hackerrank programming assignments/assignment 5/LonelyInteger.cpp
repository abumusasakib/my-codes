//https://www.hackerrank.com/challenges/lonely-integer/problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, temp;
    cin >> n;
    while(n--)
    {
        cin >> temp;
        sum ^= temp;
    }
    cout << sum << endl;
    return 0;
}
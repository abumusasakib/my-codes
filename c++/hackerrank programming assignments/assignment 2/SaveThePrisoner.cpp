//https://www.hackerrank.com/challenges/save-the-prisoner/problem
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; 
    cin >> t;
    
    for(;t > 0 ;t--)
    {
        int n, m, s; 
        cin >> n >> m >> s;
        
        s = s - 1;
        m = m - 1;
        s = s + m;
        s = s % n;
        s++;
        
        cout << s << endl;
    }
    return 0;
}

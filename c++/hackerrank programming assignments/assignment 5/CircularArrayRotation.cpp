//https://www.hackerrank.com/challenges/circular-array-rotation/problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    k = k % n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[(i+k)%n];
    while(q--)
    {
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }
}
//https://www.hackerrank.com/challenges/sock-merchant/problem
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n=9,s,Match = 0;
    int i=0,j=0;
    int c[300] = {0};
    cin >> n;
    //int c[9]={10,20,20,10,10,30,50,10,20};
    while(i<n)
    {
        cin >> s;

        c[s]++;
        i++;
    }
    while(j<300)
    {
        Match =Match + c[j]/2;
        j++;
    }
    cout <<Match;
}

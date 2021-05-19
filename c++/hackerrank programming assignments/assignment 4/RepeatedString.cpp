//https://www.hackerrank.com/challenges/repeated-string/problem
#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) 
{
    long aSum = 0;
    int sSize = s.size();
    
    for(int i = 0; i < sSize; i++)
    {
        if(s[i] == 'a')
        {
            aSum++;
        }
    }
    
    aSum=aSum*(n/sSize);
    n=n%sSize;
    
    for(long i = 0; i < n; i++)
    {
        if(s[i] == 'a')
        {
            aSum++;
        }
    }
    
    return aSum;

}

int main()
{
    string s = "aba";

    long n = 10;

    long result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}

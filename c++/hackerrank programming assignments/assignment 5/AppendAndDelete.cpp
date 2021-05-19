//https://www.hackerrank.com/challenges/append-and-delete/problem
#include <bits/stdc++.h>

using namespace std;

string appendAndDelete(string s, string t, int k) 
{
    int sSize = s.size(), tSize = t.size(), stSize = sSize + tSize, sRem, tRem, totalRem;
    
    int i = 0, j = 0;
    
    while(s[i] == t[j])
    {
        ++i;
        ++j;
    }
    
    sRem = sSize - i;
    tRem = tSize - j;
    totalRem = sRem + tRem;
    
    if((totalRem <= k && (k - totalRem) % 2 == 0) || k >= stSize)
    {
        return "Yes";
    }
    else 
    {
        return "No";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s = "hackerhappy";

    string t = "hackerrank";

    int k = 9;
	
    string result = appendAndDelete(s, t, k);

    cout << result << "\n";

    return 0;
}

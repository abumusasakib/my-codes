#include <bits/stdc++.h>

using namespace std;

string solve(long a, long b, long x, long y)
{
    if(__gcd(a,b) == __gcd(x,y))
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
    int t = 3;
	vector<long> aArr{1, 2, 3};
	vector<long> bArr{1, 1, 3};
	vector<long> xArr{2, 2, 1};
	vector<long> yArr{3, 3, 1};

    for (int i = 0; i < t; i++)
	{
        long a = aArr[i];

        long b = bArr[i];

        long x = xArr[i];

        long y = yArr[i];

        string result = solve(a, b, x, y);

        cout << result << "\n";
    }

    return 0;
}

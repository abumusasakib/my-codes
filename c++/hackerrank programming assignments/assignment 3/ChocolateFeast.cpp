//https://www.hackerrank.com/challenges/chocolate-feast/problem
#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) 
{
    int chocolate = 0, buyChocolate = 0, wrapperChocolate;

    buyChocolate = n / c;
    chocolate = buyChocolate;

    while(chocolate >= m)
    {
        wrapperChocolate = chocolate / m;
        chocolate = chocolate % m;
        chocolate = chocolate + wrapperChocolate;
        buyChocolate = buyChocolate + wrapperChocolate;
    }

    return buyChocolate;

}

int main()
{
    int t = 3;
	
	vector<int> nArr{10, 12, 6};
	vector<int> cArr{2, 4, 2};
	vector<int> mArr{5, 4, 2};

    for (int i = 0; i < t; i++) 
	{

        int n = nArr[i];

        int c = cArr[i];

        int m = mArr[i];

        int result = chocolateFeast(n, c, m);

        cout << result << "\n";
    }

    return 0;
}
//https://www.hackerrank.com/challenges/sherlock-and-squares/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int squares(int a, int b)
{
    int sqLowerBound = (int)sqrt(a-1), sqUpperBound = (int)sqrt(b), result;

    result = sqUpperBound - sqLowerBound;

    return result;
}

int main()
{
    int q = 2;
	vector<int> aArr{3, 17};
	vector<int> bArr{9, 24};
    for (int i = 0; i < q; i++)
	{

        int a = aArr[i];

        int b = bArr[i];

        int result = squares(a, b);

        cout << result << "\n";
    }

    return 0;
}

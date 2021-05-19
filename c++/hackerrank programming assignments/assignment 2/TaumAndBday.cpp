//https://www.hackerrank.com/challenges/taum-and-bday/problem
#include <bits/stdc++.h>

using namespace std;

long taumBday(int b, int w, int bc, int wc, int z)
{
    long long result = (long long)b*bc + (long long)w*wc;
    result = min(result, (long long)b*bc+(long long)w*(bc + z));
    result = min(result, (long long)b*(wc + z)+(long long)w*wc);

    return result;

}

int main()
{
    int t = 5;
	vector<int> bArr{10, 5, 3, 7, 3};
	vector<int> wArr{10, 9, 6, 7, 3};
	vector<int> bcArr{1, 2, 9, 4, 1};
	vector<int> wcArr{1, 3, 1, 2, 9};
	vector<int> zArr{1, 4, 1, 1, 2};

    for (int i = 0; i < t; i++)
	{

        int b = bArr[i];

        int w = wArr[i];

        int bc = bcArr[i];

        int wc = wcArr[i];

        int z = zArr[i];

        long result = taumBday(b, w, bc, wc, z);

        cout << result << "\n";
    }

    return 0;
}

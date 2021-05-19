//https://www.hackerrank.com/challenges/a-very-big-sum/problem
#include <bits/stdc++.h>

using namespace std;


long long int aVeryBigSum(vector<long> ar)
{
    long long int sum = 0;
    for(int i = 0; i < ar.size(); i++)
    {
        sum = sum + ar[i];
    }

    return sum;
}

int main()
{
    vector<long> ar{1000000001,1000000002,1000000003,1000000004,1000000005};

    long long int result = aVeryBigSum(ar);


    cout << result << "\n";

    return 0;
}
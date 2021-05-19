//https://www.hackerrank.com/challenges/apple-and-orange/problem
#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int appleDrop = 0, orangeDrop = 0;

    int appleSize = apples.size();
    int orangeSize = oranges.size();

    for(int i = 0; i < appleSize; i++)
    {
        apples[i] = apples[i] + a;

        if(apples[i] >= s && apples[i] <= t)
        {
            appleDrop++;
        }
    }

    for(int i = 0; i < orangeSize; i++)
    {
        oranges[i] = oranges[i] + b;

        if(oranges[i] >= s && oranges[i] <= t)
        {
            orangeDrop++;
        }
    }

    cout << appleDrop << endl;
    cout << orangeDrop << endl;

}

int main()
{
    int s = 7;

    int t = 11;

    int a = 5;

    int b = 15;

    int m = 3;

    int n = 2;

    vector<int> apples{-2, 2, 1};

    vector<int> oranges{5, -6};

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}

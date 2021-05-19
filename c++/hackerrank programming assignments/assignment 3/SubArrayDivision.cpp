////https://www.hackerrank.com/challenges/the-birthday-bar/problem
#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int sSize = s.size(), counter = 0;

    for(int i = 0; i <= sSize-m; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum = sum + s[i + j];
        }

        if(sum == d)
        {
            counter++;
        }
    }

    return counter;

}

int main()
{
    int n = 5;

    vector<int> s{1, 2, 1, 3, 2};

    int d = 3;

    int m = 2;

    int result = birthday(s, d, m);

    cout << result << "\n";

    return 0;
}

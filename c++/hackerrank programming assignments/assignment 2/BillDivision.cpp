//https://www.hackerrank.com/challenges/bon-appetit/problem
#include <bits/stdc++.h>

using namespace std;

void bonAppetit(vector<int> bill, int k, int b)
{
    int billSize = bill.size(), total = 0;

    for(int i=0;i<billSize;i++)
    {
        if(i != k)
        {
            total=total+bill[i];
        }
    }

    total = total / 2;

    if(b == total)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << b - total;
    }

}

int main()
{
    int n = 4;

    int k = 1;

    vector<int> bill{3, 10, 2, 9};

    int b = 12;

    bonAppetit(bill, k, b);

    return 0;
}

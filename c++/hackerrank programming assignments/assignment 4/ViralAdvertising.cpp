//https://www.hackerrank.com/challenges/strange-advertising/problem
#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) 
{
    int total = 0, counter = 2;
    for(int day = 1; day <= n; day++)
    {
        total = total + counter;
        counter = (counter * 3) / 2;
    }
    
    return total;

}

int main()
{
    int n = 3;

    int result = viralAdvertising(n);

    cout << result << "\n";

    return 0;
}

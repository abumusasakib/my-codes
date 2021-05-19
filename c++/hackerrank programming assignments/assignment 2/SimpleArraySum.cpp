//https://www.hackerrank.com/challenges/simple-array-sum/problem
#include <bits/stdc++.h>

using namespace std;



int simpleArraySum(vector<int> ar)
{
    int sum = 0;
    for(int i = 0; i < ar.size(); i++)
    {
        sum = sum + ar[i];
    }

    return sum;
}

int main()
{
 
    vector<int> ar{1,2,3,4,10,11};


 

    int result = simpleArraySum(ar);
    cout << result << "\n";

 
    return 0;
}
//https://www.hackerrank.com/challenges/plus-minus/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void plusMinus(vector<int> arr)
{
    int pos = 0, neg = 0, zero = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0)
        {
            pos++;
        }

        else if (arr[i] < 0)
        {
            neg++;
        }

        else
        {
            zero++;
        }
    }

    float ratioPos, ratioNeg, ratioZero;

    ratioPos = (float) pos / arr.size();
    ratioNeg = (float) neg / arr.size();
    ratioZero =(float) zero / arr.size();

    cout << fixed << setprecision(6) <<  ratioPos << endl;
    cout << fixed << setprecision(6) << ratioNeg << endl;
    cout << fixed << setprecision(6) << ratioZero << endl;

}

int main()
{
    vector<int> arr{-4, 3, -9, 0, 4, 1};

 
    plusMinus(arr);

    return 0;
}
//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
#include <bits/stdc++.h>

using namespace std;


int birthdayCakeCandles(vector<int> candles)
{
    int maximum = 0, maximumCounter = 0;

    for(int i = 0; i < candles.size(); i++)
    {
        if(candles[i] > maximum)
        {
            maximum = candles[i];
        }
    }
    
    for(int i = 0; i < candles.size(); i++)
    {
        if(candles[i] == maximum)
        {
            maximumCounter++;
        }
    }
    return maximumCounter;
}

int main()
{
    vector<int> candles{3, 2, 1, 3};


    int result = birthdayCakeCandles(candles);

    
	cout << result << "\n";

    return 0;
}

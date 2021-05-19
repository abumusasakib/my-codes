//https://www.hackerrank.com/challenges/counting-valleys/problem
#include <bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path) 
{
    int step, stepCount = 0;
    
    for(int i = 0; i < steps; i++)
    {
        if(path[i] == 'U')
        {
            step++;
        }
        else 
        {
            step--;
        }
        
        if(step == 0 && path[i] == 'U')
        {
            stepCount++;
        }
    }
    
    return stepCount;
}

int main()
{
    int steps = 8;

    string path = "UDDDUDUU";

    int result = countingValleys(steps, path);

    cout << result << "\n";

    return 0;
}
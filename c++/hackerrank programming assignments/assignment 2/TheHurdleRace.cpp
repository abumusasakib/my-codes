//https://www.hackerrank.com/challenges/the-hurdle-race/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void increaseHeight(int currHeight, int& k, int& doseCounter)
{

    while(k < currHeight)
    {
        k++;
        doseCounter++;
    }
    
}

int hurdleRace(int k, vector<int> height) 
{
    int noOfDoses = 0;
    for(int i = 0; i < height.size(); i++)
    {
        if(k < height[i])
        {
            increaseHeight(height[i], k, noOfDoses);
        }
    }
    
    return noOfDoses;

}

int main()
{
    int n = 5;

    int k = 4;

    
    vector<int> height{1,6,3,5,2};
	

    int result = hurdleRace(k, height);

    cout << result << "\n";


    return 0;
}
//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include <bits/stdc++.h>

using namespace std;




vector<int> breakingRecords(vector<int> scores)
{
    int max, min, scoresSize = scores.size();
    max = scores[0];
    min = scores[0];
    int maxRecord = 0, minRecord = 0;
    vector<int> result;

    for(int i = 0; i < scoresSize; i++)
    {
        if(scores[i] > max)
        {
            max = scores[i];
            maxRecord++;
        }

        if(scores[i] < min)
        {
            min = scores[i];
            minRecord++;
        }
    }

    result.push_back(maxRecord);
    result.push_back(minRecord);

    return result;

}

int main()
{
	vector<int> scores{10, 5, 20, 20, 4, 5, 2, 25, 1};

    vector<int> result = breakingRecords(scores);

    
	for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    

    return 0;
}
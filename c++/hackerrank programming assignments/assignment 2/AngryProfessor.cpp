#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector<int> a)
{
    int stdOnTime = 0, aSize = a.size();

    for(int i = 0; i < aSize; i++)
    {
        if(a[i] <= 0)
        {
            stdOnTime++;
        }
    }
    if(stdOnTime < k)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int t = 2;

	vector<int> kArr{3, 2};
	vector<vector<int>> aArr{{-1, -3, 4, 2}, {0, -1, 2, 1}};

    for (int i = 0; i < t; i++)
    {
        int n = 4;

        int k = kArr[i];

        string result = angryProfessor(k, aArr[i]);

        cout << result << "\n";
    }

    return 0;
}

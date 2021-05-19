////https://www.hackerrank.com/challenges/utopian-tree/problem
#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) 
{
    int height=1;
    while(n > 0)
    {
        height = height * 2;
        n = n - 1;
        if(n > 0)
        {
            height = height + 1;
            n = n - 1;;
        }
    }
    
    return height;
}

int main()
{
    int t = 3;
	vector<int> nArr{0, 1, 4};

    for (int i = 0; i < t; i++) 
	{
        int n = nArr[i];

        int result = utopianTree(n);

        cout << result << "\n";
    }

    return 0;
}

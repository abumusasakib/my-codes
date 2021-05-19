//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
#include <bits/stdc++.h>

using namespace std;


string catAndMouse(int x, int y, int z)
{
    if((abs(z-x)) < (abs(z-y)))
    {
        return "Cat A";
    }
    else if((abs(z-y)) < (abs(z-x)))
    {
        return "Cat B";
    }
    else
    {
        return "Mouse C";
    }

}

int main()
{
        int x = 1;

        int y = 2;

        int z = 3;

        string result = catAndMouse(x, y, z);

        cout << result << "\n";


    return 0;
}

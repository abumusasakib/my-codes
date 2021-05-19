//https://www.hackerrank.com/challenges/library-fine/problem
#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int fine;

    if(d1 == d2 && m1 == m2 && y1 == y2)
    {
        fine = 0;
    }
    else
    {
        if(y1 > y2)
        {
            fine = 10000;
        }
        else if(m1 > m2 && y1 == y2)
        {
            fine = 500 * (m1 - m2);
        }
        else if(d1 > d2 && m1 == m2 && y1 == y2)
        {
            fine = 15 * (d1 - d2);
        }
        else
        {
            fine = 0;
        }
    }

    return fine;

}

int main()
{
    int d1 = 9;

    int m1 = 6;

    int y1 = 2015;

    int d2 = 6;

    int m2 = 6;

    int y2 = 2015;

    int result = libraryFine(d1, m1, y1, d2, m2, y2);

    cout << result << "\n";

    return 0;
}

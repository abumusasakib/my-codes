//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
#include <bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year)
{
    int noOfDays = 28, totalMonths = 215, day;
    string strDay, strYear;

    if(year >= 1919)
    {
        if(year%400==0 || (year%100!=0 && year%4==0))
        {
            noOfDays = 29;
        }
    }
    else if(year >= 1700 && year <= 1917)
    {
        if (year%4 == 0)
        {
            noOfDays = 29;
        }
    }
    else if(year == 1918)
    {
        totalMonths = totalMonths + 15;
    }

    if(year != 1918)
    {
        totalMonths = totalMonths + noOfDays;
    }

    day = 256-totalMonths;

    strDay = to_string(day);
    strYear = to_string(year);
    strDay = strDay + ".09." + strYear;
    return strDay;
}

int main()
{
    int year = 2017;

    string result = dayOfProgrammer(year);

    cout << result << "\n";

    return 0;
}

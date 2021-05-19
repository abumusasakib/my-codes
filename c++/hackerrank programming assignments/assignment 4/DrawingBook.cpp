//https://www.hackerrank.com/challenges/drawing-book/problem
#include <bits/stdc++.h>

using namespace std;

int minimum(int num1, int num2)
{
    if(num1 < num2)
    {
        return num1;
    }
    else 
    {
        return num2;
    }
}
int pageCount(int n, int p) 
{
    int page1 = p/2, page2 = (n-p)/2;
    if(n & 1)
    {
        return minimum(page1,page2);
    }
    else
    {
        n++;
        page2=(n-p)/2;
        return minimum(page1,page2);
    }
}

int main()
{
    int n = 6;

    int p = 2;

    int result = pageCount(n, p);

    cout << result << "\n";

    return 0;
}

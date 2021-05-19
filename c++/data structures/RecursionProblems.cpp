#include <iostream>

using namespace std;

void printLR(int n)
{
    cout << "print inside recursive function before: " << n << endl;
    if  (n == 0)
    {
        cout <<"";
    }
    else
    {
        cout << "after: " << n << endl;
        printLR(n-1);
    }

    cout << "print inside recursive function after: " << n << endl;

}

int fibR(int n)
{
    if (n == 0)
        return 0;
    if (n ==1 )
        return 1;
    else
    {
        int fib1 = fibR(n-1);
        int fib2 = fibR(n-2);
        cout << "fibR(" << n<< "-1): " << fib1 << " + fibR(" << n<< "-2: " << fib2 << "= " << fib1+fib2 << endl;
        return fib1 +fib2;
    }
}

int factR (int n)
{
    if (n <= 1)
        return 1;
    else
    {
        int prod = n*factR(n-1);
        cout << "n: "  << n << "Prod: "<< prod << endl;
        return prod;
    }
}

int sumR(int n)
{
    if (n == 0)
        return 0;
    else
    {
        int sum = sumR(n-1) + n;
        cout << "n: " << n << ", Call: sumR(" << n-1 << "); sum: " << sum << endl;
        return sum;
    }
}

int sumIter(int n)
{
    int sum = 0;
    for(int i = n; i >=0; i--)
    {
        sum = sum+i;
    }
    return sum;
}

void printLiter(int n)
{
    for (int i = 0; i < n; i++)
        cout << "print inside iterative function:" << i <<endl;;
}

int main ()
{
    //printLiter(10000);
    printLR(10000000);
}

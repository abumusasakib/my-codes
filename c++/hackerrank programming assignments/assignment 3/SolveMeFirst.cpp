//https://www.hackerrank.com/challenges/solve-me-first/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b)
{
	return a+b;
}

int main()
{
  int num1, num2;
  int sum;
  cout<<"Enter 1st Number : ";
  cin>>num1;
  cout<<"Enter 2nd Number : ";
  cin>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}


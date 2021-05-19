#include<iostream>
using namespace std;
int main()
{
    int number, divCounter = 0;
    cout << "Enter a Number :";
    cin >> number;
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            divCounter++;
        }
    }
    if(divCounter == 2)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}
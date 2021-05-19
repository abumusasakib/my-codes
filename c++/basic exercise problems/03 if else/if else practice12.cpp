#include<iostream>
using namespace std;
int main()
{
    double x,y,z;

    cout << "Enter the values: " << endl;
    cin>>x>>y>>z;

    if(x > y && x > z)
    {
       cout << "Largest : " << x << endl;
    }
    else if(y > z)
    {
        cout << "Largest : " << y << endl;
    }
    else
    {
        cout << "Largest : " << z << endl;
    }

    if(x < y && x < z)
    {
        cout << "Smallest : " << x << endl;
    }
    else if(y < z)
    {
        cout << "Smallest :" << y << endl;
    }
    else
    {
        cout << "Smallest : " << z << endl;
    }
}

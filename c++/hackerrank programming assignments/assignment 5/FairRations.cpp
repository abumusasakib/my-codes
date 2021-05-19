//https://www.hackerrank.com/challenges/fair-rations/problem
#include<bits/stdc++.h>
using namespace std;
#define L long long
int main()
{
    int num;
    cin>>num;
    int i=0;
    int odd=0;
    int even=0;
    int arr[num];
    while(i<num)
    {
        cin>>arr[i];
        if(arr[i] & 1)
        {
         odd++;
        }
        else
        {
            even++;
        }
        i++;
    }
    if(odd%2==1)
    {
        cout<<"NO";
    }
    else
    {
        int f=0,i=0;
        while(i<(num-1))
        {
            if(arr[i]&1)
            {
                if(i<(num-1))
                {
                arr[i]++;
                arr[i+1]++;
                f=f+2;
                }
            }
            i++;
        }
        cout<<f<<endl;
    }
}

//https://www.hackerrank.com/challenges/correctness-invariant/problem/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int N, int arr[]) 
{
    int i,j;
    int value;
    for(j=1;j<N;j++)
    {
        value=arr[j];
        i=j-1;
        while(i>-1 && value<arr[i])
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=value;
    }
    for(j=0;j<N;j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}
int main(void) {

    int N = 6;
	
    int arr[N] = {7, 4, 3, 5, 6, 2};

    insertionSort(N, arr);

    return 0;
}
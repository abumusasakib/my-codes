#include <stdio.h>
int main()
{
    double n;
    printf("Enter the number: ");
    scanf("%lf", &n);
    if(n > 0.0)
        printf("The number is positive.");
    else if(n < 0.0)
        printf("The number is negative.");
    else
        printf("The number is zero.");
    return 0;
}

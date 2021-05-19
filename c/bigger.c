#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if(a>b)
        printf("The number %d is largest.", a);
    else
        printf("The number %d is largest.", b);

    return 0;
}

#include <stdio.h>
int main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);
    if(y % 400 == 0 || (y % 100 != 0&&y % 4 ==0))
        printf("The year is leap year.");
    else
        printf("The year is not leap year.");
    return 0;
}

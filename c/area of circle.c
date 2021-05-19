/* program to calculate the area of a circle */
#include <stdio.h>

main()

{
    float radius, area;

    printf("Radius = ? ");
    scanf("%f", &radius);
    if (radius < 0)
        area = 0;
    else
        area = 3.14159 * radius * radius;
    printf("Area = %f", area);
}

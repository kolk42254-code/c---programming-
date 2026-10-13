#include<stdio.h>
#define pi 3.14

int main()
{
    float area, volume, r;
    printf("Enter radius = \n");
    scanf("%f", &r);
    area = 4 * pi *(r*r);
    printf("Area of the sphere is %f\n", area);
    volume=(4.0/3.0) * pi * (r*r*r);
    printf("Volume of the sphere is %f\n", volume);
    return 0;
}
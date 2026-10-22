#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d1, d2;
    a = 3.6;
    b = 4.0;
    c = -12;
    d1 = 3;
    d2 = 2;
    printf("Rounded up number is %.0f\n", ceil(a));
    printf("Rounded down number is %.0f\n", floor(a));
    printf("Square root of the number is %.0f\n", sqrt(b));
    printf("Absolute value of the number is %.0f\n", fabs(c));
    printf("Power value of the number is %.0f\n", pow(d1, d2));
    return 0;
}
// Sphere

#include <stdio.h>
#define PI 3.14159

int main()
{
    double radius;

    scanf("%lf", &radius);
    // (4.0 / 3) was used instead of (4 / 3) because the output of (4/3) is an integer
    // but we need the output with decimal value
    printf("VOLUME = %.3lf\n", ((4.0 / 3) * PI * radius * radius * radius));

    return 0;
}
// Distance Between Two Points

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, x, y;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    x = x2 - x1;
    y = y2 - y1;

    printf("%.4lf\n", sqrt((x * x) + (y * y)));

    return 0;
}
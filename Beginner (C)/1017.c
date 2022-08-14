// Fuel Spent

#include <stdio.h>

int main()
{
    int time, average_speed;
    double fuel;

    scanf("%d %d", &time, &average_speed);

    printf("%.3lf\n", time * average_speed / 12.0);

    return 0;
}
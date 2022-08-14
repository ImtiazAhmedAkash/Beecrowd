//The Greatest

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    // formula for finding the greater of two value
    max = (a + b + abs(a - b)) / 2;

    max = (max + c + abs(max - c)) / 2;

    printf("%d eh o maior\n", max);

    return 0;
}
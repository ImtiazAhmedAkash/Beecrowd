// Magic and Sword

#include <stdio.h>
#include <math.h>

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

int main()
{
    int test, w, h, x0, y0, level, cx, cy;
    scanf("%d", &test);
    char str[6];

    while (test--)
    {
        scanf("%d %d %d %d", &w, &h, &x0, &y0);
        scanf("%s %d %d %d", str, &level, &cx, &cy);

        /*
            Xn and Yn is the co ordinate of the point on or inside
            of the rectangle closest to the center of the circle

            Given two opposite diagonal points of a rectangle (X1, Y1),
            (X2, Y2) and the center of the circle (Xc, Yc), radius R,
            the closest point (Xn, Yn) can be calculated as:
            Xn= max(X1, min(Xc, X2))
            Yn= max(Y1, min(Yc, Y2))
        */
        int xn = max(x0, min(cx, x0 + w));
        int yn = max(y0, min(cy, y0 + h));
        xn = xn - cx;
        yn = yn - cy;

        // distance between (Xn, Yn) and (Xc, Yc)
        double distance = sqrt((xn * xn) + (yn * yn));

        int fire[] = {0, 20, 30, 50};
        int water[] = {0, 10, 25, 40};
        int earth[] = {0, 25, 55, 70};
        int air[] = {0, 18, 38, 60};
        int radius, damage = 0;

        if (str[0] == 'f')
        {
            radius = fire[level];
            damage = 200;
        }
        else if (str[0] == 'w')
        {
            radius = water[level];
            damage = 300;
        }
        else if (str[0] == 'e')
        {
            radius = earth[level];
            damage = 400;
        }
        else
        {
            radius = air[level];
            damage = 100;
        }

        /*  if the distance is less than or equal to radius,
            the enemy will take damage
            distance should not be typecasted into integer
            otherwise problems may arise
            for example if distance is 25.5 and radius is 25
            the output should be 0 because distance > radius
            but if we typecast distance into integer, 
            distance will be 25 and as distance == radius 
            a value will be print and it will be a wrong answer
        */
        if (distance <= radius)
            printf("%d\n", damage);
        else
            printf("0\n");
    }
    return 0;
}

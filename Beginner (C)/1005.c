// Average 1

#include <stdio.h>

int main()
{
    double a, b, result;
    
    scanf("%lf %lf", &a, &b);
    
    // result = ((a * w1) + (b * w2)) / (w1+w2);
    result = ((a * 3.5) + (b * 7.5)) / 11;
    
    printf("MEDIA = %.5lf\n", result);
    
    return 0;
}

// Simple Calculate

#include <stdio.h>
int main()
{
    int code, unit;
    double price, result = 0.00;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d %lf", &code, &unit, &price);
        result = result + (unit * price);
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", result);
    return 0;
}
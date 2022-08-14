// Age in days

#include <stdio.h>

int main()
{
    long long int input, years, months, days;

    scanf("%lld", &input);

    years = input / 365;
    input = input % 365;

    months = input / 30;

    days = input % 30;

    printf("%lld ano(s)\n%lld mes(es)\n%lld dia(s)\n", years, months, days);

    return 0;
}
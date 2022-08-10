// Salary

#include <stdio.h>

int main()
{
    int number, worked_hours;
    double amount_per_hour;
    
    scanf("%d %d %lf", &number, &worked_hours, &amount_per_hour);
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", (amount_per_hour * worked_hours));
    
    return 0;
}

// Salary with Bonus

#include <stdio.h>

int main()
{
    char name[30];
    double fixed_salary, products_sold;
    
    scanf("%s %lf %lf", &name, &fixed_salary, &products_sold);
    printf("TOTAL = R$ %.2lf\n", fixed_salary + (products_sold * 0.15));
    
    return 0;
}

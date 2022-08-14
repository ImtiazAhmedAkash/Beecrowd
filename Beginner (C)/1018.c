// Banknote

#include <stdio.h>

int main()
{
    int input, note[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &input);

    printf("%d\n", input);

    for (int i = 0; i < 7; i++)
    {
        printf("%d nota(s) de R$ %d,00\n", input / note[i], note[i]);
        input = input % note[i];
    }

    return 0;
}
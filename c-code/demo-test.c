#include <stdio.h>

void drawing(int);

int main()
{
    int number;
    char *p;
    p = "please input your lucky number:";
    puts(p);
    scanf("%d", &number);
    printf("\n");
    drawing(number);
    return 0;
}

void drawing(int number)
{
    int m, i, j, k;
    number = number % 2 == 0 ? number + 1 : number;
    m = number / 2 + 1;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= m - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
}
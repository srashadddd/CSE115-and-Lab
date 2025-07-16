#include <stdio.h>

void print(int);

int main(void)
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    print(n);

    return 0;
}

void print(int n)
{
    int row, column;

    for (row = 1; row <= n; row++)
    {
        for (column = 1; column <= row; column++)
            printf("*");
        printf("\n");
    }

    for (row = n - 1; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
            printf("*");
        printf("\n");
    }
}

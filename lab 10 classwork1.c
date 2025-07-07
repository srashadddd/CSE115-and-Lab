#include <stdio.h>

int sum(int);

int main(void)
{
    int howmany = 0;

    printf("How many numbers do you want to enter?\n");
    scanf("%d", &howmany);

    int total = sum(howmany);

    printf("Total sum is: %d\n", total);

    return 0;
}

int sum(int howmany)
{
    int x = 1, num, sum = 0;

    while (x <= howmany)
    {
        printf("Enter number %d: ", x);
        scanf("%d", &num);

        sum = sum + num;
        x = x + 1;
    }

    return sum;
}

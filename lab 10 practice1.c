#include<stdio.h>

int countDigits(int);

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int totalDigits=countDigits(number);

    printf("Total number of digits, %d\n", totalDigits);

    return 0;
}

int countDigits(int num)
{
    int count=0;

    if(num==0)
    {
        return 1;
    }

    while (num !=0)
    {
        num=num/10;

        count++;
    }
    return count;
}

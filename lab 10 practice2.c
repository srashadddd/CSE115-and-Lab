#include<stdio.h>

void calculateFactorial(int);

int main(void)
{
    int num;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    calculateFactorial(num);

    return 0;
}

void calculateFactorial(int num)
{
    int factorial=1;
    int i=1;

    if(num<0)
    {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }

    do {
        factorial=factorial*i;
        i++;
    }   while(i<=num);

    printf("The factorial of %d is: %d\n", num, factorial);
}


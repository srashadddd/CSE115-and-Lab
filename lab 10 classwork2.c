#include<stdio.h>

int sumD(int);

int main (void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits: %d\n", sumD(num));

    return 0;
}

int sumD(int number)
{
    int sum = 0, digit;

    do
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    while (number > 0);

    return sum;
}

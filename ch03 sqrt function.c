#include <stdio.h>
#include <math.h>

int main(void)
{
    double first, second;     
    double first_sqrt;          
    double second_sqrt;        
    double sum_sqrt;             

    printf("Enter the first number: ");
    scanf("%lf", &first);
    first_sqrt = sqrt(first);
    printf("The square root of the first number is %.2f\n", first_sqrt);

    printf("Enter the second number: ");
    scanf("%lf", &second);
    second_sqrt = sqrt(second);
    printf("The square root of the second number is %.2f\n", second_sqrt);

    sum_sqrt = sqrt(first + second);
    printf("The square root of the sum of the two numbers is %.2f\n", sum_sqrt);

    return 0;
}

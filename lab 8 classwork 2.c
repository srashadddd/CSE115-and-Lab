#include <stdio.h>

int divisibleBy5And11(int num) {
    if (num % 5 == 0 && num % 11 == 0)
        return 1;
    else
        return 0;
}

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (divisibleBy5And11(number)) {
        printf("%d is divisible by both 5 and 11\n", number);
    } else {
        printf("%d is not divisible by both 5 and 11\n", number);
    }

    return 0;
}

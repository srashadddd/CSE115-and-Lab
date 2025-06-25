#include <stdio.h>

void evenodd(int number);

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    evenodd(num);

    return 0;
}

void evenodd(int number) {
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

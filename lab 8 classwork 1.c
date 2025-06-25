#include <stdio.h>

int max(int, int);


int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("The larger number is: %d\n", max(num1, num2));

    return 0;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

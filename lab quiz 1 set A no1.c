#include <stdio.h>

int secondLargest(int, int, int);

int main() {
    int num1, num2, num3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int second = secondLargest(num1, num2, num3);
    printf("Second largest number is: %d\n", second);
    return 0;
}

int secondLargest(int a, int b, int c) {
    if ((a > b && a < c) || (a > c && a < b))
        return a;
    else if ((b > a && b < c) || (b > c && b < a))
        return b;
    else
        return c;
}

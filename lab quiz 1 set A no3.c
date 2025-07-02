#include <stdio.h>

void identifyTriangle(int, int, int);

int main() {
    int side1, side2, side3;

    printf("Enter value of side 1: ");
    scanf("%d", &side1);

    printf("Enter value of side 2: ");
    scanf("%d", &side2);

    printf("Enter value of side 3: ");
    scanf("%d", &side3);

    identifyTriangle(side1, side2, side3);

    return 0;
}

void identifyTriangle(int a, int b, int c) {
    if (a == b && b == c)
        printf("The triangle is Equilateral.\n");
    else if (a == b || b == c || a == c)
        printf("The triangle is Isosceles.\n");
    else
        printf("The triangle is Scalene.\n");
}

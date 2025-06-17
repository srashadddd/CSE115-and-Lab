#include <stdio.h>

int main() {
    
    int number, square, cube;

    printf("Enter an integer: ");
    scanf("%d", &number);

    square = number;
    square *= number;

    cube = number;
    cube *= number;
    cube *= number;

    printf("Square of %d: %d\n", number, square);
    printf("Cube of %d: %d\n", number, cube);

    return 0;
}

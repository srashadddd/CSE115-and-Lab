#include <stdio.h>
#include <stdbool.h>

int add(int a, int b) {
    return a + b;
}

float divide(float x, float y) {
    return x / y;
}

double average(double g, double h) {
    return (g + h) / 2.0;
}

char next_char(char c) {
    return c + 1;
}

bool is_greater_than_five(int p) {
    return p > 5;
}

void say_who() {
    printf("Murashahun-Al-Masud Srashad\n");
    printf("ID: 2523639046\n");
}

int main() {
    int a, b;
    float x, y;
    char c;
    bool result;
    double g,h;

    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);

    printf("Sum of a and b is: %d\n", add(a, b));

    printf("Enter two floats to divide (x and y): ");
    scanf("%f %f", &x, &y);
    printf("x divided by y is: %.2f\n", divide(x, y));

    printf("Enter two doubles to average (g and h): ");
    scanf("%lf %lf", &g, &h);
    printf("Average is: %.2lf\n", average(g, h));

    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Next character is: %c\n", next_char(c));

    printf("Enter an integer to check if greater than 5: ");
    scanf("%d", &a);
    result = is_greater_than_five(a);
    printf("Is %d greater than 5? %s\n", a, result ? "true" : "false");

    say_who();

    return 0;
}

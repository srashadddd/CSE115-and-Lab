#include <stdio.h>
#include <math.h>

/* Function to calculate the diagonal of a rectangle */
double rect_diagonal(double length, double width) {
    return sqrt(length * length + width * width);
}

int main(void)
{
    double length, width;    /* of a rectangle */
    double diagonal;         /* of a rectangle */

    printf("Enter length and width of rectangle> ");
    scanf("%lf%lf", &length, &width);
    diagonal = rect_diagonal(length, width);
    printf("Result of rect_diagonal is %f\n", diagonal);

    return 0;
}

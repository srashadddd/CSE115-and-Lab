/* Computes a test average */
#include <stdio.h>

int main(void)
{
    int total;      /* total score */
    int students;   /* number of students */
    double average; /* average score */

    printf("Enter total students score> ");
    scanf("%d", &total);
    printf("Enter number of students> ");
    scanf("%d", &students);
    average = (double) total / (double) students;
    printf("Average score is %.2f\n", average);
    return 0;
}

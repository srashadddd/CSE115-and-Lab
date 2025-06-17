#include <stdio.h>

int main() {
    
    char firstLetter;
    int age;
    float gpa;

    printf("Enter the first letter of your name: ");
    scanf(" %c", &firstLetter);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your expected GPA for this course: ");
    scanf("%f", &gpa);

    printf("Your name's first letter: %c\n", firstLetter);
    printf("Your age: %d\n", age);
    printf("Your expected GPA: %.2f\n", gpa);

    return 0;
}

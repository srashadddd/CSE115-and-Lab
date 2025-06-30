#include <stdio.h>
void determineCategory(int);

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    determineCategory(age);
    return 0;
}

void determineCategory(int age) {
    int category = age / 10;
    switch (category) {
        case 0: // 0-9 years
            printf("Category: Child\n");
            break;
        case 1: // 10-12 years
            printf("Category: Teenager\n");
            break;
        case 2: // 13-19 years
        case 3: // 20-29 years
        case 4: // 30-39 years
        case 5: // 40-49 years
        case 6: // 50-59 years
            printf("Category: Adult\n");
            break;
        default: // 60 and above
            printf("Category: Senior Citizen\n");
    }
}

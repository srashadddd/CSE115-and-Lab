#include <stdio.h>

int main(void){
    
    int total;
    int students;  
    double average; 

    printf("Enter total students score> ");
    scanf("%d", &total);
    printf("Enter number of students> ");
    scanf("%d", &students);
    average = (double) total / (double) students;
    printf("Average score is %.2f\n", average);
    return 0;
}

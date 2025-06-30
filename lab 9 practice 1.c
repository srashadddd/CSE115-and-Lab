#include<stdio.h>

void checkNumber(int);

int main(void){
    int num;

    printf("Enter an integer: ");
    scanf("%d",&num);

    checkNumber(num);

    return 0;
}

void checkNumber(int num){
    if (num >0){
        printf("The number is positive\n");
        if (num%2==0){
           printf("It is an even number.\n");
        } else {
        printf("It is an odd number.\n");
    }
    } else if (num< 0){
    printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

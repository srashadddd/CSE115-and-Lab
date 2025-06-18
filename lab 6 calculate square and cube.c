#include<stdio.h>

double calculatesquare(double num){
    return num*num;
}

double calculatecube(double num){
    return num*num*num;
}

double num;

int main(){

    printf("Enter your number>");
    scanf("%lf",&num);

    printf("The square is>%.2lf", calculatesquare(num));

    printf("The square is>%.2lf", calculatecube(num));

    return 0;
}
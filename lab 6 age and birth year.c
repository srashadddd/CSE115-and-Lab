#include<stdio.h>

int calculateBirthyear (int age){
    int currentyear=2025;
    return currentyear-age;
}

int age;

int main(){

    printf("Enter your age>");
    scanf("%d", &age);

    int birthyear=
    calculateBirthyear(age);

    printf("Your birthyear is> %d", birthyear);

    return 0;
}
#include<stdio.h>

int calculateBirthyear (int age){
    int currentyear=2025;
    return currentyear-age;
}

int age;

int main(){

    printf("Enter your age>");
    scanf("%d", &age);

    printf("Your birthyear is> %d", calculateBirthyear(age));

    return 0;
}

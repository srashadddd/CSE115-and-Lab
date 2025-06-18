#include<stdio.h>

float square(float number){
return number*number;
}

int main(){
   float number, result;

   printf("Enter your number>");
   scanf("%f",&number);

   result = square(number);

   printf("The square of %.2f is %.2f", number, result);

   return 0;
}
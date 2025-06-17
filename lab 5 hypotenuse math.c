#include<stdio.h>
#include<math.h>


int main(){
    
    double a,b,c;

    printf("Enter the length of side a>");
    scanf("%lf",&a);

    printf("Enter the length of side b >");
    scanf("%lf",&b);

    c=sqrt(a*a+b*b);

    printf("The length of the hypotenuse is: %.2lf\n",c);


    return 0;
}

#include<stdio.h>
#include<math.h>


int main(){
    double y;

    printf("Enter a decimal number y>");
    scanf("%lf",&y);

    double exp_value=exp(y);

    double ceil_value=ceil(y);
    double floor_value=floor(y);

    printf("e^%.2lf=%2lf\n",y,exp_value);
    printf("Ceil of %.2lf=%.2lf\n",y,ceil_value);
    printf("Floor of %.2lf=%.2lf\n",y,floor_value);

    return 0;
}
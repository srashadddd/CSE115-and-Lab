#include<stdio.h>
#include<math.h>


int main(){


    double x1, x2, y1, y2, d;

    printf("Input the starting co-ordinates of x1,y1 >");
    scanf("%lf, %lf", &x1, &y1);

    printf("Input the starting co-ordinates of x2,y2 >");
    scanf("%lf, %lf", &x2, &y2);

    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf ("The total distance is %lf", d);

return 0;
}
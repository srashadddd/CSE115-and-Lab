#include<stdio.h>

int main(void)
{
    int numbers[]= {10,20,30,40,50};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum+=numbers[i];
    }

    float average=(float)sum/size;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}


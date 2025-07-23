#include<stdio.h>

int main(void)
{
    int numbers[]= {10,25,67,89,45};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int max=numbers[0];

    for(int i = 1; i < size; i++)
    {
        if (numbers[i]>max)
        {
            max=numbers[i];
        }
    }
    printf("Largest number: %d\n", max);
    return 0;
}

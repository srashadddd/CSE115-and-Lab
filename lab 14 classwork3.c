#include<stdio.h>

int main(void)
{
    int numbers[]= {10,21,30,45,50};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int small=numbers[0];

    for(int i = 1; i < size; i++)
    {
        if (numbers[i]<small)
        {
            small=numbers[i];
        }
    }
    printf("Smallest number: %d\n", small);
    return 0;
}


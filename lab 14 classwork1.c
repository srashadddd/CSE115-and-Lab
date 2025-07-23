#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int *ptr = numbers;

    printf("Array elements: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}

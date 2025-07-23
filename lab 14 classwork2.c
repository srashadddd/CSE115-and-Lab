#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 21, 30, 45, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int even = 0, odd = 0;

    for(int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}

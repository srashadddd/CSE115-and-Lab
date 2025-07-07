#include <stdio.h>

void print(double, double);

int main(void)
{
    double m, n;

    printf("Enter two numbers (m and n) to print even numbers in reverse order: ");
    scanf("%lf %lf", &m, &n);

    printf("Even numbers between %.0f and %.0f in reverse order:\n", m, n);
    print(m, n);

    return 0;
}

void print(double m, double n)
{
    int start = (int)m;
    int end = (int)n;

    if (start < end)
    {
        for (int i = (int)end; i >= (int)start; i--)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        for (int i = (int)start; i >= (int)end; i--)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
}

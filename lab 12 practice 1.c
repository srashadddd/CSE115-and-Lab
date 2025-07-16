#include <stdio.h>

void printPattern(int n)
{
    int row,column;

    for(row=n; row>=1; row--)
    {
        for (column =1; column<=row; column++)
            printf("%d",column);
        printf("\n");
    }

}

int main(void)
{

    int n=3;
    printPattern(n);

    return 0;
}

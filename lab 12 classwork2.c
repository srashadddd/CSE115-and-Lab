#include <stdio.h>

void print(int n)
{
    int row,column;

    for(row=n; row>=1; row--)
    {
        for (column =1; column<=row; column++)
            printf("*");
        printf("\n");
    }

}

int main(void)
{

    int n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);
    print(n);

    return 0;
}



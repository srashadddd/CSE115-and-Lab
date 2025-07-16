#include <stdio.h>

void print(int);

int main(void)
{

    int n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);
    print(n);

    return 0;
}

void print(int n)
{
    int row,column;

    for(row=1; row<=n; row++)
    {
        for (column =1; column<=row; column++)
            if (column%2==1) printf("1");
            else printf("0");
        printf("\n");
    }

}


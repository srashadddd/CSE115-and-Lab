#include<stdio.h>

void transpose(int matrix[3][3], int result [3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            result[j][i]=matrix[i][j];
        }
    }
}

int main(void)
{
    int matrix[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

    int result [3][3];

    transpose(matrix, result);

    printf("Transposed matrix: \n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }

    return 0;


}


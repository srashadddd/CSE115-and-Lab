#include<stdio.h>

int sum_of_elements(int matrix[3][3])
{
    int total_sum=0;
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            total_sum+=matrix[i][j];
        }
    }
    return total_sum;
}

int main(void)
{

    int matrix[3][3]= {{1,2,3,},{4,5,6},{7,8,9}};

    int sum=sum_of_elements(matrix);

    printf("Sum of elements %d\n",sum);

    return 0;


}

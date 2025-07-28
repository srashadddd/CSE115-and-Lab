#include <stdio.h>

int main(void) {
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix1[i][j] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    printf("For matrix1: \n");
    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);

    return 0;
}


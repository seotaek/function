#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void setldentityMatrix(float mat[][4], int size) {
    for (int i = 0; i < size; i++)
        mat[i][i] = 1.0f;
}




int main()
{
    float matrix[4][4] = { 0.0f, };

    int n = sizeof(matrix[0]) / sizeof(float);

    setIdentityMatrix(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
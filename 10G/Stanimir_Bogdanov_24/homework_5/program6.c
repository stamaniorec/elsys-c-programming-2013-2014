#include <stdio.h>

int main()
{
    const int matrix_size = 4;
    int matrix[matrix_size*matrix_size];
    int i;

    for ( i = 0; i < (matrix_size * matrix_size); i++ )
    {
        scanf("%d", &matrix[i]);
    }

    int k = 0, temp, j;

    while ( k < matrix_size )
    {
        temp = 0;

        for ( j = 0; j < matrix_size; j++ )
        {
            printf("%d ", matrix[k+temp]);
            temp += matrix_size;
        }
        printf("\n");

        k++;
    }

    return 0;
}

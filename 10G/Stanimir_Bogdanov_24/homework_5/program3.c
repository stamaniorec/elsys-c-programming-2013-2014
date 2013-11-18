#include <stdio.h>

void set_array(int my_array[][10]);
void print_array(int my_array[][10]);

enum array_size{ WIDTH = 10, HEIGHT = 2 };
enum array_rows{ ROW1, ROW2 };

int main()
{
    long long number;
    scanf("%lld", &number);

    int my_array[HEIGHT][WIDTH];
    set_array(my_array);

    int a;

    while ( number != 0 )
    {
        a = number % 10;
        my_array[ROW2][a] = my_array[ROW2][a] + 1;
        number /= 10;
    }

    print_array(my_array);

    return 0;
}

void set_array( int my_array[][10] )
{
    int i, j;

    for ( i = 0; i < 10; i++ )
    {
        my_array[ROW1][i] = i;
    }

    for ( j = 0; j < 10; j++ )
    {
        my_array[ROW2][j] = 0;
    }
}

void print_array( int my_array[][10] )
{
    int i;
    for ( i = 0; i < 10; i++ )
    {
        if ( my_array[ROW2][i] > 1 )
        {
            printf("%d : %d\n", my_array[ROW1][i], my_array[ROW2][i]);
        }
    }
}

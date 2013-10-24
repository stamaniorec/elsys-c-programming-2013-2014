#include <stdio.h>

int get_input();
void init_matrix( int n, int array[][n] );
int matrix_sum(int n, int array[][n]);

int main (int argc, char *argv[])
{
	int n = get_input();
	int matrix[n][n];
	init_matrix(n, matrix);
	int sum = matrix_sum(n, matrix);
	printf("%d", sum);
	return 0;
}

int get_input()
{
	int n;
	scanf("%d", &n);
	while ( n > 100 )
	{
		printf("error\n");
		scanf("%d", &n);
	}
	return n;
}

void init_matrix( int n, int array[][n] )
{
	int i, j;
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			scanf("%d", &array[i][j]);
		}
	}
}

int matrix_sum( int n, int array[][n] )
{	
	int i, j;
	int sum = 0;
	for ( i = 0; i < n; i++ )
	{
		for ( j = i + 1; j < n; j++ )
		{
			sum += array[i][j];
		}
	}
	return sum;
}

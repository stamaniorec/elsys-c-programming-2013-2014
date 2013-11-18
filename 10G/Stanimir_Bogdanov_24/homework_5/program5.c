#include <stdio.h>

int factorial ( int n );

int main()
{
    int n;

    scanf("%d", &n);

    int i;
    float answer = 0;
    float temp;

    for ( i = 1; i <= n; i++ )
    {
        temp = (float) 1 / factorial(i);
        answer += temp;
    }

    printf("%f", answer);

    return 0;
}

int factorial ( int n )
{
    int factorial = 1;
    while ( n != 0 )
    {
        factorial *= n;
        n--;
    }
    return factorial;
}

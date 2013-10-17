#include <stdio.h>
#include <string.h>

int addition ( int, int );
int subtraction ( int, int );
int multiplication ( int, int );
int division ( int, int );
int mod ( int, int );

int main()
{
    int a, b;
    char operation[3];
    scanf("%d", &a);
    scanf("%s", operation);
    scanf("%d", &b);
    if ( strcmp(operation, "add") == 0 )
    {
        printf("%d", addition(a,b));
    }
    else if ( strcmp(operation, "sub") == 0 )
    {
        printf("%d", subtraction(a,b));
    }
    else if ( strcmp(operation, "mul") == 0 )
    {
        printf("%d", multiplication(a,b));
    }
    else if ( strcmp(operation, "div") == 0 )
    {
        if ( b != 0 )
        {
            printf("%d", division(a,b));
        }
        else
        {
            printf("error");
        }
    }
    else if ( strcmp(operation, "mod") == 0 )
    {
        if ( b != 0 )
        {
            printf("%d", mod(a,b));
        }
        else
        {
            printf("error");
        }
    }
    else
    {
        printf("error");
    }
    return 0;
}

int addition ( int a, int b )
{
    return a + b;
}

int subtraction ( int a, int b )
{
    return a - b;
}

int multiplication ( int a, int b )
{
    return a * b;
}

int division ( int a, int b )
{
    return a / b;
}

int mod ( int a, int b )
{
    return a % b;
}

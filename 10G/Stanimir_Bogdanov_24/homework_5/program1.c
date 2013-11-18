#include <stdio.h>

int main()
{
    const int length = 13;

    char my_string[length];
    scanf("%s", my_string);

    int temp;
    int i, j;

    char example[13] = "23456789TJQKA";

    for ( i = 0; i < length; i++ )
    {
        for ( j = i; j < length; j++ )
        {
            if (my_string[j] == example[i])
            {
                temp = my_string[j];
                my_string[j] = my_string[i];
                my_string[i] = temp;
                break;
            }
        }
    }

    printf("%s", my_string);

    return 0;
}

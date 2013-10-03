#include <stdio.h>

int main()
{
    int counter = 0, i = 0, flag = 0, j = 0, prime = 0;
    while ( counter < 10 )
    {
        flag = 0;
        for ( j = 2; j <= i / 2; j++ )
        {
            if ( i % j == 0 )
            {
                flag = 1;
                break;
            }
        }
        if ( flag == 0 )
        {
            if ( i == prime + 2 )
            {
                printf("(%d, %d)\n", prime, i);
                counter++;
            }
            prime = i;
        }
        i++;
    }


    return 0;
}

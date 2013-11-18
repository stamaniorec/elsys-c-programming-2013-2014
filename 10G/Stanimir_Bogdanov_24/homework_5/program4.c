#include <stdio.h>

enum MONEY {ONE = 1, TWO = 2, FIVE = 5};

int main()
{
    int m1, m2, m5;
    float m;

    scanf("%d %d %d %f", &m1, &m2, &m5, &m);

    int counter1 = 0, counter2 = 0, counter3 = 0;

    while ( m5 > 0 && m >= FIVE )
    {
        m -= FIVE;
        m5--;
        counter1++;
    }

    while ( m2 > 0 && m >= TWO )
    {
        m -= TWO;
        m2--;
        counter2++;
    }

    while ( m1 > 0 && m >= ONE )
    {
        m -= ONE;
        m1--;
        counter3++;
    }

    if ( m == 0 )
    {
        printf("Yes: %d, %d, %d", counter3, counter2, counter1);
    }
    else
    {
        printf("No");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    long long a = 2;
    long long b = 1;
    int num_count = 1;
    long long lucas = 0;
    printf("%lld \n", a);
    printf("%lld \n", b);
    while ( num_count < 100 )
    {
        lucas = a + b;
        a = b;
        b = lucas;
        num_count++;
        printf("%d - %lld \n", num_count, lucas);
    }

    return 0;
}

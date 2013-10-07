#include <stdio.h>
    int main()
{
    unsigned long long a,b,c;
    int i;
	a=2;
	b=1;
    c=a+b;
    printf("%llu\n%llu\n%llu\n",a,b,c);
    for(i=4;i<=100;i++)
{
    a=b;
    b=c;
    c=a+b;
    printf("%llu\n",c);
}
return 0;
}



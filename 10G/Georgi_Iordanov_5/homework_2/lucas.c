#include <stdio.h>

int main() {
  
        unsigned long long int a,b,c;
        int i;
        a=2;
        b=1;
	printf("%llu\n" , a);
	printf("%llu\n" , b);
	for (i=3;i<=100;i++)
{
	c=a+b;
	printf("%d - %llu\n" ,i,c);
	a=b;
	b=c;
}
	return 0;
}


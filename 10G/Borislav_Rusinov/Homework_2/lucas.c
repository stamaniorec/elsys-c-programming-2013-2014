#include <stdio.h> 

int main () 
{
	int i=1;
	unsigned long long y=1,x=2,luc;
	printf("%d\n", x);
	printf("%d\n", y);
	for (i=1; i<=100; i++) 
	{
		luc=x+y;
		x=y;
		y=luc;
		printf("%u\n",luc) ;
	}

	return 0;
}

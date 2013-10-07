#include <stdio.h>

int main() {

int i,a,b,c;

a=2; b=1; i=1; c=0; 
	
	for ( i>=0; i<=100; i++ )
	{
	c=a+b;
	a=b;
	b=c;
	printf("%d ~ %d/n", i, c);
	}

return(0); }



#include<stdio.h>
int main ( ) 
{	
	printf("2\n");
	printf("1\n"); 	
	unsigned long long int a, b;
	int i;
	a = 2;
	b = 1;
	i = 2;
		
		while (i<=100)
		{
		a = a + b;
		b = b + a;
		i = i + 2;
		printf("%llu\n" , a);
 		printf("%llu\n" , b);
		}
		return 0;
		
}
	

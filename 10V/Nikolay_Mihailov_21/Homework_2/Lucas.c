#include<stdio.h>

int main()
{
	int n;
	unsigned int tek,min,pom;
	pom=2;
	min=1;
	printf("%u\n",pom);
	printf("%u\n",min);
	
	for(n=2;n<100;n++)
	{
		tek=min+pom;
		printf("%u\n",tek);
		pom=min;
		min=tek;				
	}
	

	return 0;
}

#include<stdio.h>

int main()
{
	unsigned long  pre,pop,tek;
	int i;

	pre=1;
	pop=2;
	tek=0;
	printf("%d - %lu\n",1, pre);
	printf("%d - %lu\n",2, pop);
	for(i=3; i<=100; i++)
	{
		tek=pre+pop;
		printf("%d - %lu\n",i,tek);
		pop=pre;
		pre=tek;	
	}

	return 0;
}

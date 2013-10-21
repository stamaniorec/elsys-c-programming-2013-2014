#include <stdio.h>

main (void)
{
	int i;
	int n;

	n = 255;
	
	for (i = 0; i <= n; i++)
	{	
		printf("\t%c - %d\n", i, i);
	}

}

#include <stdio.h>


int main()
{
 int i;
 char c;

	for(i=1;i<=255;i++)
	{
		printf("'%c'=#%d\n",c=i,i);
	}

	return 0;
}

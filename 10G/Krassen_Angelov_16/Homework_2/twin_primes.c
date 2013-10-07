#include <stdio.h>

int main () 
{
	int i, k, result;
	for(i = 3;i<32; i++)
	{
		result = 0;
		for(k=2;k<i;k++)
		{
		if (!(i%k))
			{
			result++;
			break;
			}
		}
		if(!result)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}


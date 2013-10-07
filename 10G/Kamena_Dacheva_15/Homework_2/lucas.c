#include <stdio.h>

int main()
{
 unsigned long long L1, L2, L, i;
 L1=2;
 L2=1;
 printf("%llu\n", L1);
 printf("%llu\n", L2);
	for (i=3; i<=100; i++)
	{
		L=L2+L1;
		printf("%llu\n", L);
		L1=L2;
		L2=L;
	}
 return 0;
}

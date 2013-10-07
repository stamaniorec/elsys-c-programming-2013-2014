#include <stdio.h>
#include <stdint.h>


int main()
{
	long double x, y, z;
	int i;

	x = 2;
	y = 1;

	for(i = 0; i <= 100; i++) {
		printf("%d - %.0LF \n", i, x);
		z = x + y;
		x = y;
		y = z;
	}

	return 0;
}


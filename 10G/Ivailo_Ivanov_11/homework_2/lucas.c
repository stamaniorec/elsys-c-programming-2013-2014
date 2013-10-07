#include <stdio.h>

int main() {
	unsigned long long int a,b,c;
	int i;
	a=2;
	b=1;
	c=1;
	for (i=1; i<=100; i++){
		printf("№%d : %llu \n", i, c);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}

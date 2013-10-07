#include <stdio.h>

int main() 
{
	int i, a, b, c;
	i=2;
	a=0;
	b=3;
	c=2;
	while (i<=10){
		for (c;c<=b-1;c++){
			if (b%c == 0)
				break;
		}
		if (c==b){
			if (b==a+2){
				printf("(%d;%d)\n", a, b);
				i++;
			}
			a=b;
		}
		b++;
	}
   return 0;
}

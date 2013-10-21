//Izvejdane na purvite 100 chisla na Lucas (Lucas numbers).
#include <stdio.h>
int main() {
	int i;
  	unsigned long long int 
  	a=2, 
  	b=1, 
  	c=1;
  	for (i=1; i<=100; i++) {
    		printf("Chislo %d: %llu \n", i, c);
    		c=a+b;
    		a=b;
    		b=c;
  	}
   	return 0;
} 

//Izvejdane na purvite 10 prosti dvoyni chisla (Twin primes).
#include <stdio.h>
int main() {
  	int i, c;
  	int 
  	ch1 = 0, 
  	ch2 = 2;
  	
  	for(i=2; i<=10;) {
    		for(c=2; c<=ch2-1; c++) {
      			if (ch2%c == 0)
       			break;
    		}
    		if(c==ch2) {
      			if(ch2==ch1+2) {
        			printf("(%d , %d)\n", ch1, ch2);
       				i++;
     			}
      			ch1 = ch2;
    		}
    		ch2++;
 	 }	
   return 0;
} 

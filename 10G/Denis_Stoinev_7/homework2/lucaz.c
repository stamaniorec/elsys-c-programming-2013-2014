#include <stdio.h>

int main() {
  
   unsigned long long int lz1,lz2,Lucaz;
   int m;
       lz1 = 2;
       lz2 = 1;
	 printf("%llu\n%llu\n" ,lz1,lz2);
	 for (m=3; m<101; m++)
{
	    Lucaz = lz1+lz2;
	    printf("%d => %llu\n" ,m,Lucaz);
	    lz1 = lz2;
	    lz2 = Lucaz;
}
  return 0;
}


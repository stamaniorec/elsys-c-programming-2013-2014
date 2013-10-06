#include<stdio.h> 
   int  main(){
   unsigned long int a, b, c;
   int i;
   c=0;	
   a=2;
   b=1;
   printf("%d - %lu\n",1, a);
   printf("%d - %lu\n",2, b);
   for (i=3; i<=100; i++){
	c=b+a;
	printf("%d - %lu\n",i, c);
	a=b;
        b=c;    
   }
return 0;
}

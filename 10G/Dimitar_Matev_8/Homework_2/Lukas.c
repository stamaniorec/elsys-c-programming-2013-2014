#include<stdio.h>

int main() {

	unsigned int a,b=3,L=2,z;

		printf("2\n");
		printf("1\n");

		for (a=1;a<=2 ;a++) {
			
						
			L=L+1;  ;
									
			printf("%u\n", L);	
		}

		for (a=2;a<=101;a++) {
			z=L; 			
			L=L+b;  ;
			b=z;						
			printf("%u\n", L);
		}

return 0;
}

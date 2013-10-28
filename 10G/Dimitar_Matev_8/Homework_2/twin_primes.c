#include <stdio.h>

int main () {

	int i,a,b,z=0;
	
		for (i=1;i<=107;i++) {
		
			
			
			a=2;
			
			while (a<i && i%a!=0) {
				
				a++;
			
			
			}
			
			
			if (a==i) {
			
				a=2;
				while ( a<i+2 && (i+2)%a!=0) {
					a++;
					
				}
				if(a==i+2) {
					printf("%d,%d\n",i,i+2);
				}
							
			}
		}
	
return 0;
}

#include<stdio.h>
#include<string.h>

int main() {

	int a=0,b=0,c;
	char chr[255];
	
	scanf("%d",& a);
	
	scanf("%s",chr);
	
	scanf("%d",& b);
	
		if (a==0) {
    		 	printf("error\n");
	        }else{
		
		
			if (!strcmp(chr,"div") & b==0 ) {
				printf("error\n");
			
			}else{ 
				if (!strcmp(chr,"mod") & b==0){
					printf("error\n");
				}else{
	
					if (!strcmp(chr,"add")) {
						c=a+b;
						printf("%d\n",c);
		
					} else {
		
			
			
						if (!strcmp(chr,"sub")) {
							c=a-b;
							printf("%d\n",c);
			
						} else {
		 	
			
							if (!strcmp(chr,"mul")) {
								c=a*b;
								printf("%d\n",c);
		
							} else {
		
			
								if (!strcmp(chr,"div")) {
									c=a/b;
									printf("%d\n",c);
		
								} else {
		
		
			
									if (!strcmp(chr,"mod")) {
										c=a%b;
										printf("%d\n",c);
			
									} else { printf("error\n"); }
			}
			}
			}
			}
			}	
			}
			}

return 0;
}

#include<stdio.h>
#include<string.h>
int main(void){
	char command[6]; 
	int i,j;

	scanf("%d %s %d",&i,command,&j); 

		if(!strcmp(command, "add"))
			printf("%d", i+j);
		else if(!strcmp(command, "sub"))
			printf("%d", i-j);
		else if (!strcmp(command, "mul"))
			printf("%d", i*j);
		else if (!strcmp(command, "div")){
			if(j) printf("%d", i/j); 
				else printf("error");
		}
		else if (!strcmp(command, "mod")){
			if(j) printf("%d", i%j);
				else printf("error");
		}
		else printf("error");

return 0;
}

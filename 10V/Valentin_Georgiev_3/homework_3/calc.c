#include<stdio.h>
#include<string.h>
int main(void){
	char command[6]; 
	int i,j;

	printf("Simple calculator\n");
	printf("\n");

	printf("Enter first number - enter operation - enter second number: ");
	scanf("%d %s %d",&i,command,&j); 

		if(!strcmp(command, "add"))
			printf("Answer: %d", i+j);
		else if(!strcmp(command, "sub"))
			printf("%d\n", j-i);
		else if (!strcmp(command, "mul"))
			printf("Answer: %d\n", i*j);
		else if (!strcmp(command, "div")){
			if(j) printf("Answer: %d\n", i/j); 
				else printf("Error! Devision by zero. ");
		}
		else if (!strcmp(command, "mod")){
			if(j) printf("Answer: %d\n", i%j);
				else printf("Error! Devision by zero. ");
		}
		else printf("Error!\n");
return 0;
}

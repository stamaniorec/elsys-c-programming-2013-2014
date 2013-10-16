#include <stdio.h>

int main() {
	char operator[3];
	int first_num, second_num; 
	 
	scanf("%d  %s  %d", &first_num, operator, &second_num);  
	
	if(strcmp (operator, "add") == 0) {
		printf("%d\n", first_num + second_num);	
	} 
	else if(strcmp (operator, "sub") == 0) {
		printf("%d\n", first_num - second_num);
	} 
	else if(strcmp (operator, "mul") == 0) {
		printf("%d\n", first_num * second_num);	
	} 
	else if(strcmp (operator, "div") == 0) {
		if(second_num == 0) {
			printf("error\n");
		} else {
	    		printf("%d\n", first_num / second_num);
	    	}    		    	
	} 
	else if(strcmp (operator, "mod") == 0) {
		if(second_num == 0) {
			printf("error\n");
		} else {
	    		printf("%d\n", first_num % second_num);
	    	}	
	} 
	else 
	{
		printf("error\n");
	}	
	return 0;
} 

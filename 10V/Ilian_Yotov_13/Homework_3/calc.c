#include <stdio.h>
int main( ) 
{
	char operator[3];
	int num1, num2, error = 0;  
	
	printf("\n\nIzberi si dve chisla i m/u tqh sloji operator(add, sub, mul, div, mod): ");
	scanf("%d  %s  %d", &num1, operator, &num2);  
	
	if(strcmp (operator, "add") == 0) {
		printf("Rezultat : %d \n\n", num1+num2);
		
	} else if(strcmp (operator, "sub") == 0) {
		printf("Rezultat : %d \n\n", num1-num2);
		
	} else if(strcmp (operator, "mul") == 0) {
		printf("Rezultat : %d \n\n", num1*num2);
		
	} else if(strcmp (operator, "div") == 0) {
	    	printf("Rezultat : %d \n\n", num1/num2);
	    	
	} else if(strcmp (operator, "mod") == 0) {
	    	printf("Rezultat : %d \n\n", num1%num2);
	    	
	} else {
		printf("Greshka pri presmqtaneto!\n\n");
	}	
	return 0;
} 

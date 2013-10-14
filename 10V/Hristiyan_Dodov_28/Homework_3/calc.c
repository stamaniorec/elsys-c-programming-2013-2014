#include <stdio.h>

int main(){

	int i1;
	int i2;
	int i3;
	char op[3];
	
	int error = 0;
	
	printf("\n// operatori : add,sub,mul,div,mod //\nIzberi si dve chisla i mejdu tqh sloji operator : ");
	scanf("%d %s %d", &i1, op, &i2);
	
	if (strcmp(op, "add") == 0){
		i3=i1+i2;
	}else 
	if (strcmp(op, "sub") == 0){
		i3=i1-i2;
	}else 
	if (strcmp(op, "mul") == 0){
		i3=i1*i2;
	}else 
	if (strcmp(op, "div") == 0){
		i3=i1/i2;
	}else 
	if (strcmp(op, "mod") == 0){
		i3=i1%i2;
	}else{
		error=1;
		printf("error\n");}
	
	if (error==0){
		printf("Rezultat : %d \n", i3);
	}
	
	return 0;
}

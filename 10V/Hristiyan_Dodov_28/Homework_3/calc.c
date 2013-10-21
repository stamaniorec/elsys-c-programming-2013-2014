#include <stdio.h>

int main(){

	int i1;
	int i2;
	int i3;
	char op[3];
	
	int error = 0;
	
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
		if (i2!=0) {
			i3=i1/i2;
		}else {
			error=1;
		}
	}else 
	
	if (strcmp(op, "mod") == 0){
		if (i2!=0) {
			i3=i1%i2;
		}else {
			error=1;
		}	
	}
	
	if (error==0){
		printf("%d", i3);
	}else {
		error=1;
		printf("error");
	}
		

	return 0;

}

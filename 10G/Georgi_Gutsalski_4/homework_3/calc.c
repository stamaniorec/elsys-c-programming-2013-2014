# include <stdio.h> 
# include <string.h>
int main(int argc, char* argv[]) { 
int num1, num2, result,f =0; 
char opr[3];
scanf("%d %s %d", &num1, opr, &num2); 
if (!strcmp(opr, "add" )){  
	result = num1 + num2;
	f=1;
	}
if (!strcmp(opr, "sub" )){  
	result= num1 - num2; 
	f=1;
}
if (!strcmp(opr, "mul" )) { 
	result= num1 * num2;
	f=1; 
}
if (!strcmp(opr, "div" )){  
	if (num2!=0){
		result= num1 / num2;
		f=1;	
	} 
} 
if (!strcmp(opr, "mod" )){  
	if (num2!=0){
		result= num1 % num2;
		f=1;
	}
} 
if (f==1) {
	printf("%d\n", result);
} 
else { 
printf("error");
}
return 0; 
}

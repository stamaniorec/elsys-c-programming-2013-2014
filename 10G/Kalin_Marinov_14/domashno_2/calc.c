#include <stdio.h>
#include <string.h>

int main(){

	char str[3];
	int a, b, result;
	scanf("%d %s %d", &a, str, &b);
	if(!strcmp(str, "add")){
		result = a + b;
		printf("rezultatut e %d\n", result);
	}else if(!strcmp(str, "sub")){
		result = a - b;
		printf("rezultatut e %d\n", result);
	}else if(!strcmp(str, "mul")){
		result = a * b;
		printf("rezultatut e %d\n", result);
	}else if(!strcmp(str, "div")){
		result = a / b;
		printf("rezultatut e %d\n", result);
	}else if(!strcmp(str, "mod")){
		result = a % b;
		printf("rezultatut e %d\n", result);
	}else printf("error\n");
		

	return 0;
}

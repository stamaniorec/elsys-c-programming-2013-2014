#include <stdio.h>
#include <string.h>

int main(){
	int num1, num2, c, h;
	char opr[3];
	scanf ("%d %s %d", &num1, &opr, &num2);
	if (strcmp(opr, "add") == 0){ c = 1; }
	else if (strcmp(opr, "sub") == 0){ c = 2; }
	else if (strcmp(opr, "mul") == 0){ c = 3; }
	else if (strcmp(opr, "div") == 0){ c = 4; }
	else if (strcmp(opr, "mod") == 0){ c = 5; }		
	switch(c){
		case 1:
			h = num1+num2;
			printf("\t %d ADD %d = %d \n", num1, num2, h);
			break;
		case 2:
			h = num1-num2;
			printf("\t %d SUB %d = %d \n", num1, num2, h);
			break;
		case 3:
			h = num1*num2;
			printf("\t %d MUL %d = %d \n", num1, num2, h);
			break;
		case 4:
			if (num2 == 0){
				printf("\t %d DIV %d = 0 \n", num1, num2);
			} else {
				h = num1/num2;
				printf("\t %d DIV %d = %d \n", num1, num2, h);
			}
			break;
		case 5:
			if (num2 == 0){
				printf("\t %d MOD %d = 0 \n", num1, num2);
			} else {
				h = num1%num2;
				printf("\t %d MOD %d = %d \n", num1, num2, h);
			}
			break;
		default:
			printf ("\t ERROR: Wrong Operation/Operator! \n");
			break;
	}
	return 0;
}

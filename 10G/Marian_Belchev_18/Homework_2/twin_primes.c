#include <stdio.h>

int main(){
	int i, c, num1 = 0, num2 = 3;
	
	for (i = 2; i <= 10; ){
		for (c = 2; c <= num2-1; c++){
			if (num2%c == 0)
				break;
		}
		if (c==num2){
			if (num2 == num1 + 2){
				printf("(%d, %d) \n", num1, num2);
				i++;
			}
			num1 = num2;
		}
		num2++;
	}
   return 0;
}

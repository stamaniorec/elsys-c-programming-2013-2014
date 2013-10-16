#include <stdio.h>

int main(){
	int i;

	int const ASCII_RANGE = 255;

	for(i = 0; i<=ASCII_RANGE; i++){
		printf("%c - %d\n",i,i);
	}

	return 0;
}

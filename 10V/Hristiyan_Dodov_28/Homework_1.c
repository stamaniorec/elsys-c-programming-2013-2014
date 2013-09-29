#include <stdio.h>
#include <signal.h> 

int main(){

	char c;
	int i=0;

	for(i; i<255; i++){

		c=i;

		printf("%d - %c\n", i, c);

	}

	return 0;

}

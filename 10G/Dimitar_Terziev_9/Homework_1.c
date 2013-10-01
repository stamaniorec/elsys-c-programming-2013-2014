#include<stdio.h>
int main () {
	char charsim=0;
	int broqch=0;
	while (broqch<256) {
		printf("%d-%c \n",broqch,charsim);
		broqch++;
		charsim++;
	}
return 0;
}

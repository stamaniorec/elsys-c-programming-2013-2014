#include <stdio.h>

enum bool { false, true };

int check(int b);

int main() {
	
	int i, x;
	x = 1;

	for(i = 1; i <= 10;) {	
		x++;
		if (check(x) && check(x+2)) {
		printf("(%d, %d)\n", x, x+2);
		i++;
		}
	}	
	return 0;
}

int check(int b) {
	int t,o, s;
	o=1;
	t = 1;
	s=false;

	while(t) {
	o++;
	t = b % o;
	}
	if (o == b) 
	s = true;
	return s;
}

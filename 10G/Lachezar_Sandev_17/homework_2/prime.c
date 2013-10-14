#include "stdio.h"

int main() {
	int i, j, result;
	for(i=3; i<100; i++) {
		result = 0;
		for(j=2; j<i; j++) {
			if(!(i%j)) {
				result++;
				break;
			}
		}
		if(!result) {
			printf("%d\n", i);
		}
	}
	return 0;
}

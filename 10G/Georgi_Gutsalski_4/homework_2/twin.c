#include "stdio.h"

int main() {
	int i, a, result;
	for(i=3; i<100; i++) {
		result = 0;
		for(a=2; a<i; a++) {
			if(!(i%a)) {
				result++;
				break;
			}
		}
		if(!result) {
			printf("%d", i, printf("%d\n", i));
		}
	}
	return 0;
}

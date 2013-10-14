#include <stdio.h>

int main() {
	int h, k, result;
	for(h=3; h<100; h++) {
		result = 0;
		for(k=2; k<h; k++) {
			if(!(h%k)) {
				result++;
				break;
			}
		}
		if(!result) {
			printf("%d\n", h);
		}
	}
	return 0;
}

#include <stdio.h>

int main () {

	int n, i, i2;
	float a, s=0;
	
	scanf("%d", &n);
	if (n<2 || n>100) {
		printf("error");
		return 1;
	}
		
	for (i=1; i<=n; i++) {
		for (i2=1; i2<=n; i2++) {
			scanf("%f", &a);
			if (i2>i) {
				s=s+a;
			}	
		}
	}
	
	printf("%f", s);
	
	return 0;

}

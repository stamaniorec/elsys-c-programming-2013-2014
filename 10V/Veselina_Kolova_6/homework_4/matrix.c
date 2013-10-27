#include <stdio.h>

int main() {

int n, r, c;
float s = 0;

scanf("%d", &n);

while (n <= 1 || n > 100) {
	printf("Uh-oh... Try again!\n");
	scanf("%d", &n);
}

float trix[n][n];

for (r = 0; r < n; r++) {
	for (c = 0; c < n; c++) {
		scanf("%f", &trix[r][c]);
		if (c > r) {
			s += trix[r][c];
		}
	}
}

printf("%f\n", s);

return 0;
}

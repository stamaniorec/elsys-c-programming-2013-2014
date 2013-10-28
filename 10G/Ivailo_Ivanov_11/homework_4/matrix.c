#include<stdio.h>

int main(){


	int i, k, n, s;
	s=0;
	
	scanf("%d", &n);
	if (n>100 | n<0){
		printf("error");
		return 0;
	}
	
	int array[n][n];
	for (i=1; i<=n; i++){
		for (k=1; k<=n; k++){
			scanf("%d", &array[i][k]);
		}
	}

	for (i=1; i<=n; i++){
		for (k=1; k<=n; k++){
			if (i<k){
				s=s+array[i][k];
			}
		}
	}

	printf("%d", s); 

	
    return 0;
}

#include <stdio.h>

int main(){
	int n, index1, index2;
	float sum;
	scanf("%i", &n);
	if(n<=100){
		float arr[n][n];
		for(index1 = 0; index1 < n; index1++)
			for(index2 = 0; index2 < n; index2++){
				scanf("%f", &arr[index1][index2]);
				if(index1 < index2)
					sum += arr[index1][index2];
			}
		printf("%f", sum);
	}else{
		printf("error");
	}

	return 0;
}

#include <stdio.h>

int main(){

	int n,i,j,num,sum=0;
	
	for(;;){
		scanf("%d", &n);
		if (n>100 | n<0){
			printf("error\n");
		}else break;
	}

	int arr[n][n];

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<j)
			sum += arr[i][j];
		}
	}
	printf("%d\n", sum);
	
return 0;

}

#include <stdio.h>
int main(){
        int n,i,j,sum=0;
        scanf("%d",&n);
        int arr[n][n];
		if(n<=100 && n>0){
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
	}
	else{
		printf("error");
	}
return 0;
}

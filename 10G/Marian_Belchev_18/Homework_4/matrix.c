#include <stdio.h>

int main()
{
    int i, j, n, sum = 0, arr[n][n];
    scanf("%d", &n);
    if (n<=100){
    	for (i=1; i<=n; i++){
    		for (j=1; j<=n; j++){
    			scanf("%d", &arr[i][j]);
    		}
   	 }
   	for (i=1; i<=n; i++){
    		for (j=1; j<=n; j++){
    			if (i<j){
    				sum=sum+arr[i][j];
    			}
    		}
   	 }
    	printf("%d", sum);
    } else {
    	printf ("n<=100 !");
    }
    return 0;
}

#include <stdio.h> 
int main()  
{ 
	int n,a,b; 
	int sum=0;
	scanf("%d",&n);
	int arr[n][n];
	if (n<=100 && n>0) { 
		for (a=1; a<=n; a++) { 
			for (b=1; b<=n; b++) { 
				scanf("%d",&arr[a][b]); 
				if (b>a) { 
					sum=sum+arr[a][b];
				}
			} 
		}   
		printf("%d",sum); 
	} else { 
		printf("error, n<=100 !"); 
	} 
	return 0; 
} 
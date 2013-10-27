#include <stdio.h>
int main () 
{
int i,n,j;
float A[100][100], sum=0;
scanf ("%d",&n);
if (n<=100)
	{
	for (i=1;i<=n;i++)
		{
		for (j=1;j<=n;j++)
			{
			scanf ("%f",&A[i][j]);
			if (i<j) sum=sum+A[i][j];
			}
		}
	printf("%f",sum);
	}
else { 
	printf("Error");
     }
return 0;
}

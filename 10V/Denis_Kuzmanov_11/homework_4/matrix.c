#include <stdio.h>

int main() 
{
	int n,r,col;
	float table[100][100];
	float sum=0;
  		scanf("%d",&n);
   		 for (r=0; r<=n-1; r++)
		 {
		      for (col=0; col<=n-1; col++)
		 	{
		        scanf("%f",&table[r][col]);
		        if (col>r) sum +=table[r][col];
	         	}
   		 }  
   	 printf("%f",sum);
  
  return 0;
} 

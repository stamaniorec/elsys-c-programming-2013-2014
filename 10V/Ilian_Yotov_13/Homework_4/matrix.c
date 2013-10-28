#include <stdio.h>
int main() 
{
	float sum=0,
	matrix[100][100];
	int n, row=0, col=0;
	
	scanf("%d", &n);

	if(n>0) 
	{
  		if(n<=100) 
		{
	     		for(row; row<=n-1; row++) 
			{
		 		for(col; col<=n-1; col++) 
				{
		   			scanf("%f",&matrix[row][col]);

		  		 	if(col>row) 
					{
						sum +=matrix[row][col];
					}
		 		}
	     		}  
	     		printf("%f", sum);
   		} 
		else
		{
     			printf("error");
   		}
	} 
	else 
	{
		printf("error");
	}

   	return 0;
}



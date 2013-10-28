#include <stdio.h>

int main () 
{	
	int n,i,j,sum,current_element;
	scanf("%d",&n);
	if (n>100) 
	{
		printf("error!\n");
		return 1;
	}
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++) 
		{				
			scanf("%d",&current_element);
			if (j>i)
			{
				sum=sum+current_element;			
			}
		}	
	}
	printf("%d\n",sum);
	
	return 0;
}

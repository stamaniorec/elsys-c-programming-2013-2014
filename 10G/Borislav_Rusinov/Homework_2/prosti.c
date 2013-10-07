#include <stdio.h>

int main () 
{
	int broqch=0,vqrnoA, vqrnoB,j,a,b;
	for (a=1;a<=1000; a++) 
	{
		vqrnoA=1;
		if(broqch==10){
			break;		
		}
		for (j=2;j<=a/2;j++)
		{
			if(a%j==0)
			{				
				vqrnoA=0;
				break;		
			}
		}
		if (vqrnoA==1)
		{
			vqrnoB = 1;
			b=a+2;
			for (j=2;j<=b/2;j++)
			{
				if(b%j==0)
				{				
					vqrnoB=0;
					break;		
				}
			}
			if (vqrnoB == 1)
			{
				broqch++;
				printf("(%d, %d)\n", a, b);
			}
			
		}			
	}
	
	
	return 0;
}

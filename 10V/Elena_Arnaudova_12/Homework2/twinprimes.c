#include <stdio.h>
int prime(int x) 
{
int i=1, s=0;
for (i>0; i<=x; i++) {
	if (x%i==0) {s++;}
		     }
	if (s==2) 
		{return 0;}
	else 
		{return 1;}
}

int main()
{
int i=1, i2=0;
for (i>0; i<=200; i++) 
{
	if (prime(i)==0) 
	{
  	if (prime(i+2)==0)
		{
		printf("%d, %d\n", i, i+2);
		i2++;
		if (i2==10)
			{break;}
		}
	}
}
return 0;
}		

	
	
